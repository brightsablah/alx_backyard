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

	printf("%ld, ", sum_old);
	printf("%ld, ", sum_new);

	for (a = 1; a < 49; a++)
	{
		temp = sum_old + sum_new;
		sum_old = sum_new;
		sum_new = temp;

		printf("%ld", temp);

		if (a == 48)
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
