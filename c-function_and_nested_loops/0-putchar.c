#include "main.h"

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
		_putchar(text[i]);
		i++;
	}

	_putchar(newline);

return (0);

}
