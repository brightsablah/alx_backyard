#include "main.h"

/**
* print_last_digit - prints last digit of an int
* @a: input int value
*
* Return: Always 0 (Success)
*/

int print_last_digit(int a)
{
int r;
int b;

/* making number absolute */
	if (a < 0)
	{
		r = -a;
	}

	else
	{
		r = a;
	}

/* returning the last digit */

	b = r;

	while (r > 9)
	{
		r = r % 10;
		b = r;
	}

	_putchar(b);


return (b);

}
