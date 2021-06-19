#include <stdio.h>
/**
 * main - Prints the alphabet in reverse
 * Description: Prints the aplhabet from z to a
 * Return: 0 and the letters
 */

int main(void)
{
	char ch = 'z';

	while (ch > 96)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
