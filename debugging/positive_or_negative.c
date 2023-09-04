#include <stdio.h>


/**
  * positive_or_negative - checks if an integer is positive, negative or zero
  * @n: input number
  * Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
