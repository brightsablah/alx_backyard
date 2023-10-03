#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates array of characters
* Description: initializes it with specific char
* @size: number of elements
* @c: character to initialize the array with
* Return: array
*/

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)(malloc(size * sizeof(char)));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
