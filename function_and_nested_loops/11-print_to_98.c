#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints numbers up to 98
* Description:
* @n: starting number
* Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	while ( n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

	}

	printf("%d\n", 98);

}
