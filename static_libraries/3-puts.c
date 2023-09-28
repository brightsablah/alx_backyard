#include "main.h"

/**
* _puts - prints a string
* Description:
* @str: pointer to string variable address
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}
