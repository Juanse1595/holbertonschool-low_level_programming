#include <stdio.h>
/**
 * fibonacci - Prints first 50 Fibonacci numbers
 * Return: First 50 Fibonacci numbers
 */

void fibonacci(void)
{
	long n1 = 1, n2 = 2, i = 1, sum = 0;

	printf("%ld, %ld, ", n1, n2);
	while (i <= 50)
	{
		sum = n1 + n2;
		printf("%ld", sum);
		if (i < 50)
			printf(", ");
		n1 = n2;
		n2 = sum;
		i++;
	}
	printf("\n");
}

int main(void)
{
	fibonacci();
	return (0);
}
