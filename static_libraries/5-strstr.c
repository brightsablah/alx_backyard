#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * Description:
 * @haystack: string in which function should lookup
 * @needle: string to be searched for
 * Return: address to first occurence of the cubstring in the haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == needle[0])
		{	i++;
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack - i);
		}
		i = 0;
		haystack++;
	}

	return (NULL);
}
