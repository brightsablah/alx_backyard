#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints numbers from 0 - 14 ten times
* Description:
*
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}

		_putchar('\n');
	}


}
