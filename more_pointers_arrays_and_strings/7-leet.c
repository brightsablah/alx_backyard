#include <stdio.h>

/**
* leet - encodes string into 1337
* Description: converts all specified characters into
* specified codes
* @str: pointer to string input
* Return: Pointer to converted string
*/


char *leet(char *str)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
	char code[] = "4307143071";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = code[j];
			}
		}
	}
return (str);

}
