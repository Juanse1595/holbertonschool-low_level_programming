#include <stdio.h>

/**
 * main - prints the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	long n = 612852475143, a = 2;

	while (n != a)
	{
		if (n % a == 0)
			n = n / a;
		else
			a++;
	}
	printf("%ld\n", a);
	return (0);
}
