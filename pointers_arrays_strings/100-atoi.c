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

	count = 0;
	stoi = 0;
	sign = 1;
	intg = 0;

	while (s[count])
	{
		if (s[count] == 45)
		{
			sign *= -1;
		}

		while (s[count] >= 0 && s[count] <= 9)
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
