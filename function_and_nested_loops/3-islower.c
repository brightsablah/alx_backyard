#include <stdio.h>

/**
* _islower - checks if character is lower case
* @c: input character
*
* Return: Always 0 (Success)
*/

int _islower(int c)
{
int b;

	if (c >= 'a' && c <= 'z')
	{
		b = 1;
	}
	else
	{
		b = 0;
	}

return (b);

}
