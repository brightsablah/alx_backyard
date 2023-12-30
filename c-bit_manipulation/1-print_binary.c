#include "main.h"


/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The unsigned long int to be printed in binary
 *
 * Description:
 * This function prints the binary representation of an unsigned long int to
 * the standard output.
 */
void print_binary(unsigned long int n)
{
		/* Number of bits in unsigned long int */
	int bit_position = sizeof(unsigned long int) * 8 - 1;
	int leading_zero_flag = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_position >= 0)
	{
		unsigned long int mask = 1UL << bit_position;
		/* Create a mask with only one bit set at the current position */

		if ((n & mask) != 0 || !leading_zero_flag)
		{
			leading_zero_flag = 0;
			putchar(((n & mask) != 0) ? '1' : '0');
		}

		bit_position--; /* Move to the next bit position */
	}
}
