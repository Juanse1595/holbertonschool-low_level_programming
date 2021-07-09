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
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
