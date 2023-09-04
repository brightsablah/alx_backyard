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
	int sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum = sum + a;
		}
	}

	printf("%d\n", sum);

return (0);

}
