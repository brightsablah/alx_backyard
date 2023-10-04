#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char mul[1000];

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}

	/* check if strings are numbers only */

	strmul(argv[1], argv[2], mul);

	_puts(mul);

return (0);

}


/**
* _puts - prints a string
* Description:
* @str: pointer to string variable address
* Return: Always 0 (Success)
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
* strmul - multiplies a string of integers
* Description:
* @num1: first string of integers
* @num2: second string of integers
* @result: result of multiplication
* Return: string of results
*/

void strmul(char *num1, char *num2, char *result)
{
	/*char *result;*/
	int len1, len2, product;
	int i, j, k;
	int *mul_result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	mul_result = (int *)(int_calloc(len1 + len2, sizeof(int)));

	for (i = len2 - 1; i >= 0; i--)
	{
		for (j = len1 - 1; j >= 0; j--)
		{
			product = num2[i] * num1[j];
			mul_result[i + j + 1] += product % 10;
			mul_result[i + j] += product / 10;
		}
	}
	k = 0;
	while (k < len1 + len2 && mul_result[k] == 0)
		k++;

	if (k == len1 + len2)
	{
		result = "0";
		free(mul_result);
		/*return (result);*/
	}
	else
	{
		for (i = 0; k < len1 + len2; i++, k++)
		{
			result[i] = mul_result[k] + '0';
		}
		result[len1 + len2 - k] = '\0';
	}
	free(mul_result);
}


/**
* _strlen - returns length of string
* Description:
* @s: pointer to address of string variable
* Return: int value (Success)
*/

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

return (count);

}


/**
* int_calloc - allocates memory using malloc
* Description:
* @size: byte size of allocated memory
* @nmemb: number of array elements
* Return: void pointer to allocated memory or NULL on failure
*/

void *int_calloc(int nmemb, int size)
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
