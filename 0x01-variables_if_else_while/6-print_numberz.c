#include <stdio.h>
/**
 * main - Prints 0 to 9
 * Description: Prints 0 to 9 using putchar
 * Return: 0 and the numebrs from 0 to 9
 */

int main(void)
{
	char ch = '0';

	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
