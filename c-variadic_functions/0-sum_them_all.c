#include "variadic_functions.h"

/**
* sum_them_all - sums a variable number of integers
* Description:
* @count: number of variable input
*
* Return: sum of variable integers or 0 if count = 0
*/

int sum_them_all(const unsigned int count, ...)
{
	unsigned int i, sum = 0;
	va_list arg_list;

	if (count == 0)
		return (0);

	va_start(arg_list, count);

	for (i = 0; i < count; i++)
	{
		sum += va_arg(arg_list, int);
	}

	va_end(arg_list);

	return (sum);
}
