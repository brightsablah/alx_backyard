#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, j, k, product;
	int *mul_result = NULL;
	char *result = NULL;

	if (argc != 3)
	{
		printf("Error, wrong number of arguments\n");
		exit(98);
	}

	char *num1 = argv[1], *num2 = argv[2];
	int len1 = strlen(num1), len2 = strlen(num2);

	mul_result = (int *)calloc(len1 + len2, sizeof(int));
	if (mul_result == NULL)
	{
		printf("Error, mul_result memory allocation failed\n");
		exit(98);
	}
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		printf("Error, result memory allocation failed\n");
		exit(98);
	}

	for (i = len2 - 1; i >= 0; i--)
	{
		for (j = len1 - 1; j >= 0; j--)
		{
			product = (num2[i] - '0') * (num1[j] - '0');
			int add_carry = product + mul_result[i + j + 1];
			mul_result[i + j + 1] = add_carry % 10;
			mul_result[i + j] += add_carry / 10;
		}
	}

	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = mul_result[i] + '0';
	}
	result[len1 + len2] = '\0';

	printf("%s\n", result);

	free(mul_result);
	free(result);

return (0);
}
