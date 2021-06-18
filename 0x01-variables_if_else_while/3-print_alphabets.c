#include <stdio.h>
/**
 * main - prints the alphabet in lower and uppercsae
 * Description: Prints the alphabet in lower and uppercase, using putchar
 * and while loop
 * Return: 0 and the alphabet in lower and uppercase
 */
int main(void)
{
	char ch = 'a';

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch < 91)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
