#include <stdio.h>
#include "main.h"

/**
* main - prints largest prime factor of 612852475143
*
*
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int factor, num;
	num = 612852475143;

	for (factor = 3; factor < 99785838; factor = factor + 2)
	{
		while ((num % factor == 0) && (num != factor))
		{
			num = num / factor;
		}
	}

	printf("%lu\n", num);

	return (0);

}
