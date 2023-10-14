#include "variadic_functions.h"

/**
* print_numbers - prints numbers with a separator
* Description:
* @separator: selimeter to separate the numbers when printing
* @count: number of expected variable arguments
* Return: void
*/

void print_numbers(const char *separator, const unsigned int count, ...)
{
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, count);
	for (i = 0; i < count; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if ((i < count - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(arg_list);
	printf("\n");
}
