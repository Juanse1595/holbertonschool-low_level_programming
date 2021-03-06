#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: 2
 * @argv: arguments
 * Return: 1 if an Error occurred, 0 if success
 */

int main(int argc, char *argv[])
{int coins = 0, money;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			coins++;
		}
		else if (money >= 10)
		{
			money -= 10;
			coins++;
		}
		else if (money >= 5)
		{
			money -= 5;
			coins++;
		}
		else if (money >= 2)
		{
			money -= 2;
			coins++;
		}
		else
		{
			money -= 1;
			coins++;
		}}
	printf("%d\n", coins);
	return (0); }
