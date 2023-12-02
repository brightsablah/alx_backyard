#include <stdio.h>

/**
* cap_string - capitalizes a string
* Description: converts all charactersa fter specified delimeters
* int ouppercase
* @str: pointer to string input
* Return: Pointer to converted string
*/


char *cap_string(char *str)
{
	int i, j;
	char delimeter[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; delimeter[j] != '\0'; j++)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i] == delimeter[j])
			{
				str[i + 1] = str[i + 1] - 32;
			}
			else if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
return (str);

}
