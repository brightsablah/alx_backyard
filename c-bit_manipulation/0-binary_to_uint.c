#include "main.h"

/**
* binary_to_uint - converts binary to decimal
* Description:
* @b: string of characters to be converted
*
* Return: converted decimal number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = 0, i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			dec += 1 << (len - i - 1);
	}

	return (dec);
}
