#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * Description:
 * @s: pointer to string
 * @accept: prefix substring
 * Return: integer length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
		else
		{
			count++;
		}

	}

	return (count);
}
