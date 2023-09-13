#include "main.h"

/**
* main -
* Description:
*
* Return: Always 0 (Success)
*/

int _strlen(char* s)
{
	int i;
	int count;
	char array[];

	count = 0;
	i = 0;
	array = *s;

	while (array[i] != "\0")
	{
		count++;
		i++;
	}

return (count);

}
