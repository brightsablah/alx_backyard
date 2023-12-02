#include "main.h"

/**
* print_sign - returns sign of input
* Description:
* @n: input number
* Return: Always 0 (Success)
*/

int print_sign(int n)
{
	int b;

	if (n > 0)
	{
		b = 1;
		_putchar('+');
	}

	else if (n < 0)
	{
		b = -1;
		_putchar('-');
	}

	else
	{
		b = 0;
		_putchar('0');
	}

return (b);

}
