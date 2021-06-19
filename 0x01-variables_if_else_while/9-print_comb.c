#include <stdio.h>
/**
 * main - print 0 to 9
 * Description: prints 0 to 9 with a comma and a space between them
 * Return: 0 and the numbers
 */

int main(void)
{
	int num = '0';

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
			num++;
		}
		else
		{
			num++;
		}
	}
	putchar('\n');
	return (0);
}
