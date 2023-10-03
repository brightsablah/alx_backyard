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
	void *new_ptr;
	unsigned int i, copy_size;
	char *char_ptr, *char_new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	copy_size = (new_size < old_size) ? new_size : old_size;

	char_ptr = (char *)ptr;
	char_new_ptr = (char *)new_ptr;

	for (i = 0; i < copy_size; i++)
		char_new_ptr[i] = char_ptr[i];

	free(ptr);

	return (new_ptr);
}
