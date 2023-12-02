#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
* main - Entry Point
* @argc: argument count
* @argv: argument vector
*
* Return: 1 (success)
*/
int main(int argc, char *argv[])
{
	int i, j, k, product, add_carry, count1 = 0, count2 = 0, len1, len2;
	int *mul_result = NULL;
	char *result = NULL;

	if (argc != 3)
	{
		_puts("Error, wrong number of arguments");
		exit(98);
	}
	char *num1 = argv[1], *num2 = argv[2];

	while (argv[1][count1] != '\0')
		count1++;
	len1 = count1;
	while (argv[2][count2] != '\0')
		count2++;
	len2 = count2;

	mul_result = (int *)(my_calloc(len1 + len2, sizeof(int)));
	if (mul_result == NULL)
	{
		_puts("Error, mul_result memory allocation failed");
		exit(98);
	}
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		_puts("Error, result memory allocation failed");
		exit(98);
	}
	str_mul(num1, num2, len1, len2, mul_result, result);
return (0);
}



/**
* str_mul- multiplies two strings
* @num1: first number
* @num2: second number
* @len1: length of first number
* @len2: length of second number
* @mul_result: array to temporalily store results
* @result: final result in the form of string
*
* Return: void
*/
void str_mul(char *num1, char *num2, int len1, int len2, int *mul_result, char *result)
{
	int i, j, k, add_carry, product;

	for (i = len2 - 1; i >= 0; i--)
	{
		for (j = len1 - 1; j >= 0; j--)
		{
			product = (num2[i] - '0') * (num1[j] - '0');
			add_carry = product + mul_result[i + j + 1];
			mul_result[i + j + 1] = add_carry % 10;
			mul_result[i + j] += add_carry / 10;
		}
	}

	k = 0;
	while (k < len1 + len2 && mul_result[k] == 0)
	k++;

	if (k == len1 + len2)
	{
		strcpy(result, "0");
		printf("0");
		free(mul_result);
		free(result);
		exit(0);
	}
	else
	{
		for (i = 0; k < len1 + len2; i++, k++)
		{
			result[i] = mul_result[k] + '0';
		}
		result[len1 + len2 - k + i] = '\0';

		_puts(result);

		free(mul_result);
		free(result);
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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
