#include "main.h"

/**
* puts_half - prints second half of string
* Description:
* @str: input string
* Return: Always 0 (Success)
*/

void puts_half(char *str)
{
	int n, len, i;

	len = 0;
	i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	n = (len - 1) / 2;

	for (i = n + 1; i < len; i++)
	{
		_putchar((str[i]));
	}

	_putchar('\n');
}
