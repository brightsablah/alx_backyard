#include "main.h"

/**
* _strcpy - copies a string to the buffer
* Description:
* @dest: pointer to a buffer
* @src: input string to be copied
* Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
	char *cpy;
	int len, i;

	len = 0;
	i = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[len] = '\0';

	cpy = dest;

return (cpy);

}
