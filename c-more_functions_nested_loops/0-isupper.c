#include <stdio.h>
#include "main.h"

/**
* _isupper - checks case of character input
* @c: input character
*
* Return: Always 0 (Success)
*/

int _isupper(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 0;
	}

	if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}

return (r);

}
