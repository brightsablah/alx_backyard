#include "main.h"

/**
 * _memset - fills memory with constant byte
 * Description:
 * @s: pointer to memory area
 * @b: constant byte to be passed
 * @n: number of memory positions to be filled
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
