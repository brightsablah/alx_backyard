#include "main.h"

/**
* times_table - prints 9 times table
* Description:
*
* Return: Always 0 (Success)
*/

void times_table(void)
{

int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
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
				_putchar(c + '0');
			}

			else if (c >= 10)
			{
				int d = c / 10;
				int e = c % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(e + '0');
			}
		}

		_putchar('\n');
	}

}
