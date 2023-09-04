#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	long int sum_old = 1;
	long int sum_new = 2;
	long int temp;
	long int sum_even = 2;

	for (a = 1; a < 31; a++)
	{
		temp = sum_old + sum_new;
		sum_old = sum_new;
		sum_new = temp;

		if (temp % 2 == 0 && temp < 40000000)
		{
			sum_even += temp;
		}
	}

	printf("%ld\n", sum_even);

return (0);

}
