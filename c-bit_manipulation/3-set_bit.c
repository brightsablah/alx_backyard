#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: The unsigned long int to extract the bit from
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return:
 * The value of the bit at the specified index (0 or 1),
 * or -1 if an error occurred (if index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(*n) * 8 - 1;
	unsigned long int mask = 1UL << index;

	if (index > max_index)
		return (-1);

	*n |= mask;

	return (1);
}
