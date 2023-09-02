#include "main.h"


/**
* print_alphabet - prints alphabets in lower case
*
* Description: simple printout of alphabets
*
* Return: returns nothing
*/

void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabets[i] != '\0')
	{
		_putchar(alphabets[i]);
		i++;
	}

	_putchar('\n');
}
