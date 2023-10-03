#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* Description: multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int mul, i, j;
	char err[] = "Error\n";

	if (argc != 3)
	{
		_puts(err);
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_puts(err);
				exit(98);
			}
		}
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	print_number(mul);
	_putchar('\n');

return (0);

}



/**
* _puts - prints a string
* Description:
* @str: pointer to string variable address
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}



/**
* print_number - prints number
* Description:
* @n: input integer
* Return: void
*/

void print_number(int n)
{
	unsigned int a;

	/* Converting negative number to positive */
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	a = n;

	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
		_putchar(a % 10 + '0');

}


/**
* _isdigit - checks case of character input
* @c: input character
*
* Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

return (r);

}
