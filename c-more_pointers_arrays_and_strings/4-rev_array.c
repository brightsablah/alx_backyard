#include "main.h"

/**
* reverse_array - reverses array
* Description: switches values to reverse components of an aray
* @a: array
* @n: array size
* Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}


}
