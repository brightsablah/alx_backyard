#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strdup - duplicates string
* Description: cpoies string into another initialized memory
* @str: string to be copied
*
* Return: pointer to duplicate string or null if unsuccessful
*/

char *_strdup(char *str)
{
	char *dupstr;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dupstr = (char *)(malloc((len + 1) * sizeof(char)));

	if (dupstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dupstr[i] = str[i];
	}

	/* null teminating duplicate string */
	dupstr[len] = '\0';

	return (dupstr);
}
