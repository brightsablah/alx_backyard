#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory using malloc
* Description:
* @size: byte size of allocated memory
* @nmemb: number of array elements
* Return: void pointer to allocated memory or NULL on failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *char_ptr = NULL;
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	char_ptr = (char *)malloc(nmemb * size);
	if (char_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		char_ptr[i] = 0;
	}

	ptr = &char_ptr[0];

	return (ptr);
}
