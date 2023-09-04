#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, sum1, sum2, sum;
	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0)
		{
			sum1 =+ a;
		}
		
		if (a % 5 == 0)
		{
			sum2 =+ a;
		}

	}

	sum = sum1 + sum2;
	printf("%d\n", sum);

return (0);

}
