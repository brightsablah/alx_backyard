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
	unsigned long long int sum_old = 1;
	unsigned long long int sum_new = 2;
	unsigned long long int temp;

	printf("%llu, ", sum_old);
	printf("%llu, ", sum_new);

	for (a = 0; a < 96; a++)
	{
		temp = sum_old + sum_new;
		sum_old = sum_new;
		sum_new = temp;

		printf("%llu", temp);

		if (a == 95)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

return (0);

}
