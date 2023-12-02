#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: finds number of coins needed to make change
*					for a given amount of money
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, cents;
	int coin_count = 0, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);

	return (0);

}
