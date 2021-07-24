#include <stdio.h>
#include "variadic_functions.h"
void printch(va_list argp);
void printint(va_list argp);
void printfloat(va_list argp);
void printstr(va_list argp);

/**
 * print_all - prints anything
 * @format: things to print
 */

void print_all(const char * const format, ...)
{
	type_t array[] = {
		{"c", printch},
		{"i", printint},
		{"f", printfloat},
		{"s", printstr},
		{NULL, NULL}
	};
	void (*p)(va_list);
	int i, j;
	va_list argp;

	va_start(argp, format);
	while (format[i])
	{
		while (array[j].a != NULL)
		{
			if (format[i] == *array[j].a)
			{
				p = array[j].funp;
				p(argp);
				printf(", ");
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
}

/**
 * printch - prints a char
 * @argp: pointer to function
 */

void printch(va_list argp)
{
	printf("%c", va_arg(argp, int));
}

/**
 * printint - prints an int
 * @argp: pointer to function
 */

void printint(va_list argp)
{
	printf("%d", va_arg(argp, int));
}

/**
 * printfloat - prints a float
 * @argp: pointer to function
 */

void printfloat(va_list argp)
{
	printf("%f", va_arg(argp, double));
}

/**
 * printstr - prints a char
 * @argp: pointer to function
 */

void printstr(va_list argp)
{
	char *aux = va_arg(argp, char *);

	if (aux == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(argp, char *));
}
