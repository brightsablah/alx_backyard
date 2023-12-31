#include "main.h"

/**
* _printf - custom printf function
* @format: format string
*
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int count = 0, num;
	va_list args;
	char *str;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;

			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				while (*str)
				{
					_putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == 'i' || *format == 'd')
			{
				num = va_arg(args, int);
				if (num < 0)
				{
					_putchar('-');
					count++;
					num  = (num * (-1));
				}
				count += _print_number(num);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		format++;
	}
		va_end(args);
		return (count);
}

/**
* _putchar - custom putchar function
* @c: character to be printed
* Return: number of characters printed
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}

/**
* _print_number - prints numbers
* @num: number to be printed
*
* Return: number of characters printed
*/
int _print_number(int num)
{
	int count = 0;

	if (num / 10)
		count += _print_number(num / 10);

	_putchar('0' + num % 10);
	count++;

	return (count);
}
