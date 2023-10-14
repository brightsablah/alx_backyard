#include "variadic_functions.h"

/**
* print_strings - prints variable number of strings
* Description:
* @separator: separates printed strings
* @count: number of variable strings expected to be passed to the function
* Return: void
*/

void print_strings(const char *separator, const unsigned int count, ...)
{
	unsigned int i;
	va_list arg_list;
	char *str;

	va_start(arg_list, count);
	for (i = 0; i < count; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((i < count - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(arg_list);

	printf("\n");
}
