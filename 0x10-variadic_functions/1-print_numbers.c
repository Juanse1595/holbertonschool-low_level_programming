#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed as asrguments,
 * separated by a separator
 * @separator: separator
 * @n: number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argp;

	if (n <= 0)
		return;
	va_start(argp, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(argp, int));
		else if (i < (n - 1))
			printf("%d%s", va_arg(argp, int), separator);
		else
			printf("%d", va_arg(argp, int));
	}
	va_end(argp);
	printf("\n");
}
