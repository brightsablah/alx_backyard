#include "main.h"

/**
* _strlen - returns length of string
* Description:
* @s: pointer to address of string variable
* Return: int value (Success)
*/

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

return (count);

}
