#include <stdio.h>
/**
 * fibonacci - Prints first 50 Fibonacci numbers
 * Return: First 50 Fibonacci numbers
 */

void fibonacci(void)
{
	long n1 = 1, n2 = 2, i = 1, sum = 0;

	printf("%ld, %ld, ", n1, n2);
	while (i <= 48)
	{
		sum = n1 + n2;
		printf("%ld", sum);
		if (i < 48)
			printf(", ");
		n1 = n2;
		n2 = sum;
		i++;
	}
	printf("\n");
}

/**
 * main - Calls fibonacci function
 * Return: 0
 */

int main(void)
{
	fibonacci();
	return (0);
}
