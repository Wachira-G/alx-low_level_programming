#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - definition
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the matrix
 * @size: size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, frd_diag = 0, bckwrd_diag = 0;

	for (i = 0; i < size; i++)
	{
		frd_diag += a[i * size + i];
		bckwrd_diag += a[i * size + (size - i - 1)];
/*
*		for (j = 0; j < size; j++) // first trial on this
*			{
*				if ((i == j) && (i + j == size - 1))
*					bckwrd_diag += a[i][j];
*				else if (i == j)
*					frd_diag += a[i][j];
*				else if (i + j == size -1)
*					bckwrd_diag += a[i][j];
*			}
*/
	}
	printf("%d, %d\n", frd_diag, bckwrd_diag);
}
