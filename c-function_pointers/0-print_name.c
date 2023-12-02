#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_name - prints a name using a function pointer
* Description:
* @name: name to be printed
* @f: pointer to function
* Return: void
*/

void print_name(char *name, void (*f)(char *str))
{
	f(name);

}
