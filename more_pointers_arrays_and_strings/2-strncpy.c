#include "main.h"

/**
* _strncpy - copies a string
* Description:
* @dest: pointer to concatenated string
* @src: pointer to string to be added to dest
* @n: number of characters of src to be added to dest
* Return: pointer to dest variable
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
