#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	print_alphabet();

return (0);

}


/**
* print_alphabet - prints alphabets in lower case
*
* Description: simple printout of alphabets
*
* Return: returns nothing
*/

void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabets[i] =! '\0')
	{
		putchar(alphabets[i]);
		i++;
	}

	putchar('\n');
}
