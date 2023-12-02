#include "main.h"

/**
* jack_bauer - prints minutes of the day
* Description: shows hours and minutes in a day
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
int min1;
int min2;
int hr1;
int hr2;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{
		for (hr2 = 0; hr2 <= 3; hr2++)
		{
			for (min1 = 0; min1 <= 5; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}

	}

}
