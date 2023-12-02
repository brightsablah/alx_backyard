#include "main.h"

/**
 * is_palindrome - tests if a string is palindrome
 * Description:
 * @s: input string
 *
 * Return: 1 if string is palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	return (palindrome_test(s, 0, _strlen_recursion(s) - 1));
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


/**
 * palindrome_test - checks if a string is palindrome
 * Description:
 * @s: input string
 * @i: start of string (least index)
 * @j: end of string (max index)
 * Return: 1 if string is palindrome and 0 if otherwise
 */

int palindrome_test(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (palindrome_test(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}
