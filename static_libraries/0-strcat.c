#include "main.h"

/**
* _strcat - adds two strings
* Description:
* @dest: pointer to concatenated string
* @src: pointer to string to be added to dest
* Return: pointer to dest variable
*/

char *_strcat(char *dest, char *src)
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

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + src_len] = '\0';


return (pointer);

}
