#include "main.h"

/**
* set_string - sets value of a pointer o a char
* Description:
* @s: pointer to pointer
* @to: address to point to
* Return: Always 0 (Success)
*/

void set_string(char **s, char *to)
{
	*s = to;
}
