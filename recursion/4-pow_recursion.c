#include "main.h"

/**
* _pow_recursion - prints a number exponent another
* Description:
* @x: base number
* @y: exponent
* Return: result of the exponentaiation or -1 if y is less than 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));

}
