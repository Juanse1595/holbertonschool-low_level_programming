#include <stdio.h>
/**
 * main - prints lowercase alphabet, not including e or q
 * Description: Prints the alphabet wihtout printing e or q
 * Return: 0 and the letters that were asked
 */

int main(void)
{
	char ch = 'a';

	while (ch < 123)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
		{
		putchar(ch);
		ch++;
		}
	}
	putchar('\n');
	return (0);
}
