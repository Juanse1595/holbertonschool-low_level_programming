#include <stdio.h>
/**
 * main - prints numbers from 0 to 89
 * Description: prints numbers from 0 to 89 without repeating combinations
 * Return: 0 and the numbers
 */

int main(void)
{
	int num1 = '0';
	int num2 = '1';

	while (num1 < 57) /*57 is 8 in ascii*/
	{
		while (num2 < 58) /*58 is 9 in ascii*/
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != '8')
				{
					putchar(',');
					putchar(' ');
					num2++;
				}
				else
				{
					num2++;
				}
			}
			else
			{
				num2++;
			}
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
