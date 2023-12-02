#include "main.h"
/**
* print_line - prints a line in the terminal
* Description:
* @n: number of underscores to print
* Return: Always 0 (Success)
*/

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count == n - 1)
		{
		_putchar('_');
		_putchar('\n');
		}

		else
		{
		_putchar('_');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}
