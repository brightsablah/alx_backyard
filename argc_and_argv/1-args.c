#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: prints number of args passed to program
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)**argv;
	printf("%d\n", argc - 1);

return (0);

}
