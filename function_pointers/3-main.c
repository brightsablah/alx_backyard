#include "3-calc.h"

/**
* main - entry point
* Description:
* @argc: argument count
* @argv: argument vectors
* Return: 0 for success, anything else otherwise
*/

int main(int argc, char *argv[])
{

	int num1, num2, answer;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if ((num2 == 0) && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(op);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	answer = func(num1, num2);

	printf("%d\n", answer);

	return (0);
}
