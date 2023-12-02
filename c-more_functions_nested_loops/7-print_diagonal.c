#include "main.h"
/**
* print_diagonal - prints a diagonal line in the terminal
* Description:
* @n: number of underscores to print
* Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int col, row;

	for (col = 0; col < n; col++)
	{
		for (row = 0; row < col; row++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}
