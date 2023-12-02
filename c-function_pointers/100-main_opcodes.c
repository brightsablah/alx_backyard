#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *, int);

/**
* main - entry point
* Description:
* @argc: argument count
* @argv: argument vector
* Return: 0 for success. any other value for failure
*/

int main(int argc, char *argv[])
{
	int bytes;
	char *mainptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mainptr = (char *)&main;
	if (mainptr == NULL)
		exit(98);

	print_opcodes(mainptr, bytes);

	return (0);
}


/**
* print_opcodes - prints operation code
* Description:
* @str: input machine code from program
* @bytes: number of bytes of operation code to be printed
* Return: void
*/

void print_opcodes(char *str, int bytes)
{
	int count;

	for (count = 0; count < bytes; count++)
	{
		printf("%.2hhx", str[count]);
			if (count != bytes - 1)
				printf(" ");
	}
	printf("\n");
}
