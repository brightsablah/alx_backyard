#include "main.h"

/**
* main -
* Description:
*
* Return: Always 0 (Success)
*/

void puts2(char* str)
{

	int count, len;

	count = 0;
	len = 0;
/* checking length of string */
	while (str[count] != '\0')
	{
		len++;
		count++;
	}

	for (count = 0; count < len; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
