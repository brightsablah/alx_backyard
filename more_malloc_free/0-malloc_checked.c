#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* Description:
* @b: byte size of allocated memory
*
* Return: void pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
