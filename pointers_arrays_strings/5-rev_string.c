#include "main.h"

/**
* main -
* Description:
*
* Return: Always 0 (Success)
*/

void rev_string(char* s)
{

	int len, left, right;
	char temp;

	len = 0;
/* checking length of string */
	while (s[len] != '\0')
	{
		len++;
	}

/* index of the beginning of string from right */
	right = len - 1;

/* swapping indexes from left to right of the middle */
	for (left = 0; right >= 0 && left < right; left++, right--)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
	}

}
