#include <stdio.h>
/**
 * main - Prints all the combinations of 3 digits
 * Description: Prints all the combinations of 3 digits without repeating any
 * digit
 * Return: 0 and the combinations of numbers
 */

int main(void)
{
	int num1 = '0';
	int num2 = '1';
	int num3 = '2';

	while (num1 < 56)
	{
		while (num2 < 57)
		{
			while (num3 < 58)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != '7')
				{
					putchar(',');
					putchar(' ');
					num3++;
				}
				else
				{
					num3++;
				}
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
		num3 = num2 + 1;
	}
	putchar('\n');
	return (0);
}
