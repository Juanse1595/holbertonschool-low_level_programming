#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums the arguments passed to the function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if no number is passed
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
