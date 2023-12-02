#include <stdio.h>
#include "main.h"
/**
* print_numbers - prints numbers from 0 - 9
* Description:
*
* Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}

	_putchar('\n');

}
