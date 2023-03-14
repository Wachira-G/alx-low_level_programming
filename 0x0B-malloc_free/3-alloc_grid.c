#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - definition
 * Description: returns a pointer to a 2 dimensional array of integers.
 * @width: no of cols
 * @height: no of rows
 * Each element of the grid should be initialized to 0
 * Return: pointer to a 2-dim array of int or,
 *   NULL on failure, If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	/*int size = width * height;*/
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return(NULL);

	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
