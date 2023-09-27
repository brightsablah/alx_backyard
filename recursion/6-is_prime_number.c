#include "main.h"

/**
* is_prime_number - checks if number is prime
* Description:
* @n: number to be checked
*
* Return: 1 if n is prime or 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_test(n, 2));
	}

}

/**
* _prime_test - tests if a number is prime
* @n: number being tested
* @div: a guess of factors
*
* Return: 1 if n does not have a factor,
*				or 0 if n has a factor
*/

int _prime_test(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}
	else if ((n % div != 0) && (div > (n / 2)))
	{
		return (1);
	}
	else
	{
		return (_prime_test(n, div + 1));
	}
}
