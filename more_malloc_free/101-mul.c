#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
* main - Entry Point
* @argc: argument count
* @argv: argument vector
*
* Return: 1 (success)
*/
int main(int argc, char *argv[])
{
	int count1 = 0, count2 = 0, len1, len2;
	int *mul_result = NULL;
	char *num1 = NULL, *num2 = NULL, *result = NULL;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	if (!_str_number(argv, 1) || !_str_number(argv, 2))
	{
		_puts("Error");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	while (argv[1][count1] != '\0')
		count1++;
	len1 = count1;
	while (argv[2][count2] != '\0')
		count2++;
	len2 = count2;
	mul_result = (int *)(my_calloc(len1 + len2, sizeof(int)));
	if (mul_result == NULL)
	{
		_puts("Error, mul_result: memory allocation failed");
		exit(98);
	}
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		_puts("Error, result: memory allocation failed");
		exit(98);
	}
	str_mul(num1, num2, len1, len2, mul_result, result);
return (0);
}


/**
* _str_number - checks if a string consists of only numbers
* @str: array of strings
* @n: particular string array to check
*
* Return: 1 if all characters are int, 0 otherwise
*/

int _str_number(char **str, int n)
{
	int i, flag;

	i = 0;
	flag = 1;

	while (str[n][i] != '\0')
	{
		if (!_isdigit(str[n][i]))
		{
			flag = 0;
			return (flag);
		}
		i++;
	}
	return (flag);
}


/**
* str_mul- multiplies two strings
* @num1: first number
* @num2: second number
* @l1: length of first number
* @l2: length of second number
* @m_res: array to temporalily store results
* @res: final result in the form of string
*
* Return: void
*/
void str_mul(char *num1, char *num2, int l1, int l2, int *m_res, char *res)
{
	int i, j, k, add_carry, product;

	for (i = l2 - 1; i >= 0; i--)
	{
		for (j = l1 - 1; j >= 0; j--)
		{
			product = (num2[i] - '0') * (num1[j] - '0');
			add_carry = product + m_res[i + j + 1];
			m_res[i + j + 1] = add_carry % 10;
			m_res[i + j] += add_carry / 10;
		}
	}

	k = 0;
	while (k < l1 + l2 && m_res[k] == 0)
	k++;

	if (k == l1 + l2)
	{
		_strcpy(res, "0");
		_puts(res);
		free(m_res);
		free(res);
		exit(0);
	}
	else
	{
		for (i = 0; k < l1 + l2; i++, k++)
		{
			res[i] = m_res[k] + '0';
		}
		res[l1 + l2 - k + i] = '\0';

		_puts(res);

		free(m_res);
		free(res);
	}
}


/**
* my_calloc - allocates memory using malloc
* Description:
* @size: byte size of allocated memory
* @nmemb: number of array elements
* Return: void pointer to allocated memory or NULL on failure
*/

void *my_calloc(int nmemb, int size)
{
	char *char_ptr = NULL;
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	char_ptr = (char *)malloc(nmemb * size);
	if (char_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		char_ptr[i] = 0;
	}

	ptr = &char_ptr[0];

	return (ptr);
}


/**
* _puts - prints a string
* Description:
* @str: string input
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}


/**
* _isdigit - checks case of character input
* @c: input character
*
* Return: 1 when it is digit and 0 when it is not
*/

int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

return (r);

}


/**
* _strcpy - copies a string to the buffer
* Description:
* @dest: pointer to a buffer
* @src: input string to be copied
* Return: char ( the copied string)
*/

char *_strcpy(char *dest, char *src)
{
	char *cpy;
	int len, i;

	len = 0;
	i = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[len] = '\0';

	cpy = dest;

return (cpy);

}
