#include "main.h"

/**
* print_times_table - prints 9 times table
* Description:
* @n: input number
* Return: Always 0 (Success)
*/

void print_times_table(int n)
{

int a, b, c;


if (n > 0 && n < 16)
{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;

			if (b == 0)
			{
				_putchar(c + '0');
			}

			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}

			else if (c >= 10 && c < 100)
			{
				int d = c / 10;
				int e = c % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(e + '0');
			}

			else if (c >= 100 && c < 1000)
			{
				int f = c / 100;
				int g = (c % 100) / 10;
				int h = c % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(f + '0');
				_putchar(g + '0');
				_putchar(h + '0');
			}
		}

		_putchar('\n');
	}
}
}
