#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbres passed as arguments
 * @argc: number of arguments
 * @argv: array with arguments
 * Return: 0 is success, 1 if argc is not 3
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
