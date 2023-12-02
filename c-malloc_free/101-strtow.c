#include "main.h"
#include <stdlib.h>

/**
* strtow - convert a string into words
* Description:
* @str: input string
*
* Return: pointer to array of words generated from string
*/

char **strtow(char *str)
{
	int numWords, i, word_index = 0, word_length = 0, inWord = 0, allSpaces;
	char **words = NULL;

	if (str == NULL || *str == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	allSpaces = all_spaces(str);
	if (allSpaces)
		return (NULL);
	numWords = word_count(str);
	words = (char **)malloc((numWords + 1) * sizeof(char *));
	while (*str)
	{
		if (*str == ' ')
			inWord = 0;
		else
		{
			if (!inWord)
			{
				inWord = 1;
				word_length = 1;
			}
			else
				word_length++;
		}
		str++;
		if ((!*str || *str == ' ') && inWord)
		{
			words[word_index] = allocate_word(str, word_length);
			if (words[word_index] == NULL)
			{
				for (i = 0; i < numWords; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			word_index++;
		}
	}
	words[numWords] = NULL;
	return (words);
}


/**
* all_spaces - checks if a string is all spaces
* @str: input string
*
* Return: flag 0 - if it is all spaces.  1 - if it is not all spaces
*/

int all_spaces(char *str)
{
	int flag = 1, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			flag = 0;
			break;
		}
	}
	return (flag);
}


/**
* word_count - counts number of words in a string
* @str: string to be checked
*
* Return: returns number of words in the string
*/

int word_count(char *str)
{
	int count = 0, inWord = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			inWord = 0;
		}
		else
		{
			if (!inWord)
			{
				count++;
			}
			inWord = 1;
		}
	str++;
	}
	return (count);
}

/**
* _strncpy - copies a string
* Description:
* @dest: pointer to concatenated string
* @src: pointer to string to be added to dest
* @n: number of characters of src to be added to dest
* Return: pointer to dest variable
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}

/**
 * allocate_word - allocate memory and copy a word from the string
 * @str: string to copy the word from
 * @length: length of the word
 *
 * Return: pointer to the allocated word
 */

char *allocate_word(char *str, int length)
{
	char *word = (char *)malloc((length + 1) * sizeof(char));

	if (word == NULL)
	{
		return (NULL);
	}

	_strncpy(word, str - length, length);
	word[length] = '\0';
	return (word);
}

