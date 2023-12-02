#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of diagonals in a square matrix
* Description:
* @a: matrix
* @size: size of matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, fsum = 0, bsum = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		fsum += a[i];
	}
	for (i = size - 1; i < ((size * size) - (size - 1)); i += size - 1)
	{
		bsum += a[i];
	}

	printf("%d, %d\n", fsum, bsum);

}
