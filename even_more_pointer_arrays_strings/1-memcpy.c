#include "main.h"

/**
 * _memcpy - copies a memory area
 * Description:
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of memory positions to be filled
 * Return: pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
