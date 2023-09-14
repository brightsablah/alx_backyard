#include <stdio.h>
#include "main.h"

/**
* _isdigit - checks case of character input
* @c: input character
*
* Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

return (r);

}
