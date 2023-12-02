#include "main.h"
/**
* print_square - prints a square in the terminal
* Description:
* @size: size of square to print
* Return: Always 0 (Success)
*/

void print_square(int size)
{
	int col, row;

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			if (row == size - 1)
			{
			_putchar('#');
			_putchar('\n');
			}

			else
			{
			_putchar('#');
			}
		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
