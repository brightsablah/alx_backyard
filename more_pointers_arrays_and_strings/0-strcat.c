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

	char temp[];
	int dest_index = 0;
	int src_index = 0;

	while (*dest[dest_index] != '\0')
	{
		temp[dest_index] = *dest[dest_index];
		dest_index++;
	}

	while (*src[src_index] != '\0')
	{
		temp[dest_index + src_index] = *src[src_index];
		src_index++;
	}

	temp[dest_index + src_index] = *src[src_index];

	*dest = temp;

return (dest);

}
