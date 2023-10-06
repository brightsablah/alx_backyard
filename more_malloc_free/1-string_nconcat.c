#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates strings
* Description: concatenates string into another initialized memory
* @s1: first string
* @s2: second string
* @n: number of characters of second string to be concatenated
* Return: pointer to concatenated string or null if unsuccessful
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 != NULL)
		len1 = _strlen_recursion(s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = _strlen_recursion(s2);
	else
		len2 = 0;

	if (n < len2)
	{
		len2 = n;
	}

	concatstr = malloc((len1 + len2 + 1) * sizeof(char));
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


/**
* _strlen_recursion - prints length of a string
* Description:
* @s: input string
*
* Return: length of string
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
