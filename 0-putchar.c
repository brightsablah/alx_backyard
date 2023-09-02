#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char newline = '\n';
	int i = 0;
	char text[] = "_putchar";

	while (text[i] != '\0')
	{
		putchar(text[i]);
		i++;
	}

	putchar(newline);

return (0);

}
