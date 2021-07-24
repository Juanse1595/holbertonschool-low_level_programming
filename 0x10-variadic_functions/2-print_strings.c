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

	va_start(argp, n);
	if (n > 0)
	{
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
				printf("(nil)%s", separator);
			else
				printf("%s%s", aux, separator);
		}
		aux = va_arg(argp, char *);
		if (aux == NULL)
			printf("(nil)");
		else
			printf("%s", aux);
	}
	}
	printf("\n");
	va_end(argp);
}
