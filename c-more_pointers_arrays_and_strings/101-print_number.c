#include <stdio.h>
#include "main.h"

/**
* print_number - prints number
* Description:
* @n: input integer
* Return: void
*/

void print_number(int n)
{
	unsigned int a;

	/* Converting negative number to positive */
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	a = n;

	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
		_putchar(a % 10 + '0');

}
