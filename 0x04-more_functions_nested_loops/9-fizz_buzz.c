#include <stdio.h>

/**
 * main - prints from 1 to 100 but the multiples of 3 prints
 * Fizz, for multiples of 5 prints Buzz and for multiples of
 * 3 and 5 prints FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
