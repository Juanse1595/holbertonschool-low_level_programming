#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums numbers passed as arguments
 * @n: number of numbers to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list argp;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(argp, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argp, int);
	va_end(argp);
	return (sum);
}
