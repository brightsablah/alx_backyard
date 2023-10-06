#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory location using malloc and free
* Description: custom realloc function
* @ptr: pointer to the memory previously allocated with a call
* @old_size: size in bytes for aloocated space for ptr
* @new_size: size in bytes of new memory block
* Return: pointer to newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, copy_size;
	char *char_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	copy_size = new_size;

	if (new_size > old_size)
		copy_size = old_size;

	char_ptr = (char *)ptr;

	for (i = 0; i < copy_size; i++)
		new_ptr[i] = char_ptr[i];

	free(ptr);

	return (new_ptr);
}
