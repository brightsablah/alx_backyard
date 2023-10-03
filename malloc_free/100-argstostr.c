#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of a program
* Description:
* @ac: argument count
* @av: argument vector
* Return: concatenated string or NULL if unccessful
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, length = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Total length calculation */
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]) + 1;
	}

	str = (char *)(malloc(sizeof(char) * length + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k++] = '\0';

	return (str);
}

/**
* _strlen - returns length of string
* Description:
* @s: pointer to address of string variable
* Return: int value (Success)
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
return (count);
}
