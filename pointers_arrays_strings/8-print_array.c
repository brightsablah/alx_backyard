#include "main.h"
#include <stdio.h>
/**
* print_array - prints array of numbers
* Description: number of items to print is specified
* @a: pointer to array
* @n: number of array items to be printed
* Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");

return (0);

}
