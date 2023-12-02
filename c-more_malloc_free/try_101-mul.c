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
    if (argc != 3)
    {
        _puts("Error");
        return 98;
    }

    if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
    {
        _puts("Error");
        return 98;
    }

    unsigned long long num1 = strtoull(argv[1], NULL, 10);
    unsigned long long num2 = strtoull(argv[2], NULL, 10);
    unsigned long long result = num1 * num2;

    print_number(result);
    _putchar('\n');

    return 0;
}

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: Input string
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
    if (*str == '\0')
        return 0;

    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }

    return 1;
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
