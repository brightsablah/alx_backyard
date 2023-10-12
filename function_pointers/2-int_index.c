#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
* int_index - searches for an integer
* Description:
* @array: array
* @size: array size
* @cmp: pointer to comparison function
* Return: index of first match, -1 if size <= 0 or no elements match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	return (-1);
	}
return (-1);
}
