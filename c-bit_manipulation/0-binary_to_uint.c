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
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			dec = (dec << 1) | (b[i] - '0');
			i++;
		}
		else
		{
			return (0); /* non digit character found */
		}

	}

	return (dec);
}
