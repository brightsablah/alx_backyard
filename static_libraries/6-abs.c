#include <stdio.h>

/**
* _abs - calculate absolute value of an int
* @a: input int value
*
* Return: Always 0 (Success)
*/

int _abs(int a)
{
int r;
	if (a < 0)
	{
		r = -a;
	}

	else
	{
		r = a;
	}

return (r);

}
