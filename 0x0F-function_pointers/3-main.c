#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calls function and prints result
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success, otherwise if error
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && *argv[3] == '0') ||
			(*argv[2] == '%' && *argv[2] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	printf("%d\n", p(a, b));
	return (0);
}
