#!/usr/bin/python3
"""This module defines a function that returns the perimeter of an island"""

def island_perimeter(grid):
    """Return perimeter of the island described in grid.

    Args:
        list grid: lis go lists of integer where 0 reps water zone
        and 1 land zone:

    Return:
       int perimeter: Perimeter of the island.
    """
    perimeter = 0
    for list_ in grid:
        for number in list_:
            if number == 1:
                perimeter += number
    perimeter *= 2
    perimeter += 2
    return perimeter

