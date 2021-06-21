#include <stdio.h>
/**
 * main - prints all combinations of 2 pair of digits
 * Description: print all possible combinations of 2 pair of digits,
 * without repeating combinations
 * Return: 0, and the numbers
 */
int main(void)
{
int num1 = '0', num2 = '0', num3 = '0', num4 = '1';

while (num1 < 58)
{
	while (num2 < 58)
	{
		while (num3 < 58)
		{
			while (num4 < 58)
			{
				putchar(num1);
				putchar(num2);
				putchar(' ');
				putchar(num3);
				putchar(num4);
				if (num2 == '8' && num1 == '9')
				{
					num4++;
				}
				else
				{
				putchar(',');
				putchar(' ');
				num4++;
				}
			}
			num3++;
			num4 = '0';
		}
		num2++;
		num4 = num2 + 1;
		num3 = num1;
	}
	num1++;
	num2 = '0';
	num3 = num1;
	num4 = num2 + 1;
}
putchar('\n');
return (0);
}
