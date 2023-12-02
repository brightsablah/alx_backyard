#include <stdio.h>

/**
* string_toupper - converts lower case in a string to upper case
* Description: decreases ascii value of characters to change thier
*					case from lower to upper
*	@str: pointer to specified string
* Return: Always 0 (Success)
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

return (str);

}
