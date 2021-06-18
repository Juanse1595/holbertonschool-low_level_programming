#include <stdio.h>
/**
 * main - Prints all single digits from 0 to 9
 * Description: Prints the numbers from 0 to 9
 * Return: 0 if succesful
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
