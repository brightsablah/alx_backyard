#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in string
 * Description:
 * @s: specified string
 * @c: character to be checked
 *
 * Return: pointer to memory area
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = NULL;

	while (*s != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		i++;
	}

	return (ptr);
}
