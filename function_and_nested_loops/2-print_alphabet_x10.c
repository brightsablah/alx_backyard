#include "main.h"


/**
* print_alphabet_x10 - prints alphabets in lower case 10 times
*
* Description: simple printout of alphabets
*
* Return: returns nothing
*/

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

	_putchar('\n');

	}
}
