#include <stdio.h>
/**
 * main - prints all hexadecimal numbers
 * Description: prints all numbers of base 16 using 4 putchar
 * Return: 0 and the numbers
 */

int main(void)
{
	int num0x = '0';

	while (num0x < 58)
	{
		putchar(num0x);
		num0x++;
	}
	num0x = 'a';
	while (num0x < 103)
	{
		putchar(num0x);
		num0x++;
	}
	putchar('\n');
	return (0);
}
