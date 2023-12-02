#include "main.h"

/**
* _sqrt_recursion - finds square root using recursion
* Description:
* @n: number whose square root is to be found
*
* Return: square root value or -1 if n has no natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_test(n, 0));
	}

}

/**
* _sqrt_test - test if a number has a natural square root
* @n: number being tested
* @naturalSquare: a guess of all possible squared natural numbers
*
* Return: -1 if n does not have a natural square root,
*				or naturalSquare if it is the square root of n
*/

int _sqrt_test(int n, int naturalSquare)
{
	if (naturalSquare * naturalSquare == n)
	{
		return (naturalSquare);
	}
	else if (naturalSquare * naturalSquare > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_test(n, naturalSquare + 1));
	}
}
