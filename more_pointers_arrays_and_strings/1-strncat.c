#include "main.h"

/**
* _strncat - adds two strings
* Description:
* @dest: pointer to concatenated string
* @src: pointer to string to be added to dest
* @n: number of characters of src to be added to dest
* Return: pointer to dest variable
*/

char *_strncat(char *dest, char *src, int n)
{

	int dest_len = 0;
	int src_len = 0;
	int i;
	char *pointer = dest;

	while (*dest != '\0')
	{
		dest++;
		dest_len++;
	}

	while (*src != '\0')
	{
		src++;
		src_len++;
	}


	dest -= dest_len;
	src -= src_len;

	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + src_len] = '\0';


return (pointer);

}
