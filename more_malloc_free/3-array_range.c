#include "main.h"
#include <stdlib.h>

/**
* array_range - creates a range of integers in an array
* Description:
* @min: min integerin array
* @max: max integer in array
* Return: pointer to array of integers
*/

int *array_range(int min, int max)
{
	int *ptr = NULL, i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);

}
