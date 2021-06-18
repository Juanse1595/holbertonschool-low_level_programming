#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *Description: This function prints the alphabet in lowercase
 *using putchar
 *Return: zero, and the letters
 */
int main(void)
{
	char ch = 'a';
	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
