#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	int divisor, digit;


	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}


	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}

}
