#include "main.h"

/**
* _strcmp - compares two strings
* Description:
* @s1: first input string
* @s2: second input string
* Return: trn - lexicographical difference
*/

int _strcmp(char *s1, char *s2)
{

	int rtn;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	rtn = *s1 - *s2;

return (rtn);

}
