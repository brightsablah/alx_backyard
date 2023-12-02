#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* description: prints all arguments it receives
* @argc: argumet count
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
