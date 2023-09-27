#include "main.h"

/**
 * wildcard_check - compare two strings with wildcards recursively
 * @s1: first string without wilcard
 * @s2: second string with wildcard *
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcard_check(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return (wildcard_check(s1, s2 + 1) ||
				(*s1 && wildcard_check(s1 + 1, s2)));
	}

	if (*s1 == *s2)
	{
		return (wildcard_check(s1 + 1, s2 + 1));
	}

	return (0);
}

/**
 * wildcmp - compare two strings with wildcards
 * @s1: first string
 * @s2: second string with wildcard *
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcard_check(s1, s2));
}
