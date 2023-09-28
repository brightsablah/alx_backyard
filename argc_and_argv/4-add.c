#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point
* description: prints sum of arguments
* @argc: argumet count
* @argv: argument vector
* Return: Always 0 (Success), 1 if argument is not a digit
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
