#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * Description:
 * @s: pointer to string
 * @accept: substring
 * Return: pointer to first occurance or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}

	}

	return (NULL);
}
