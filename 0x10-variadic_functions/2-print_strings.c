#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings passed as arguments
 * @separator: separator of strings
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argp;
	char *aux;

	if (n <= 0)
		return;
	va_start(argp, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			aux = va_arg(argp, char *);
			if (aux == NULL)
				printf("(nil)");
			else
				printf("%s", aux);
		}
	}
	else
	{
		for (i = 0; i < (n - 1); i++)
		{
			aux = va_arg(argp, char *);
			if (aux == NULL)
				printf("(nil)");
			else
				printf("%s%s", aux, separator);
		}
		if (aux == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(argp, char *));
	}
	printf("\n");
	va_end(argp);
}
