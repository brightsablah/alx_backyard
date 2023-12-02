#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* str_concat - concatenates strings
* Description: concatenates string into another initialized memory
* @s1: first string
* @s2: second string
* Return: pointer to concatenated string or null if unsuccessful
*/

char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	int len1 = 0, len2 = 0, i;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	concatstr = (char *)(malloc((len1 + len2 + 1) * sizeof(char)));

	if (concatstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concatstr[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		concatstr[len1 + i] = s2[i];
	}

	/* null teminating duplicate string */
	concatstr[len1 + len2] = '\0';

	return (concatstr);
}
