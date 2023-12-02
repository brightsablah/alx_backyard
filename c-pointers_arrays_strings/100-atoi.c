#include "main.h"

/**
* _atoi - converts string into integer
* Description:
* @s: pointer to input string
* Return: Always 0 (Success)
*/

int _atoi(char *s)
{

	int count, sign, intg;
	unsigned int stoi;

	count = 0; /* counter to loop through the string array' */
	stoi = 0; /* variable to store converted strings */
	sign = 1; /* variable to account for the sign of the converted int */
	intg = 0; /* changes to 1 if an int is encounted */

	while (s[count] != '\0')
	{
		if (s[count] == '-')
		{
			sign *= -1;
		}

		while (s[count] >= '0' && s[count] <= '9')
		{
			intg = 1;
			stoi = (stoi * 10) + (s[count] - '0');
			count++;
		}

		if (intg == 1)
		{
			break;
		}

		count++;

	}

	stoi *= sign;

	return (stoi);

}
