#include <stdio.h>

/**
 * main - prints the number of arguments (the name
 * of the program doesn't count)
 * @argc: number of arguments
 * @argv: unused
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
