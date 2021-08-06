#include "main.h"

/**
  * clear_bit - set value of a bit to 0
  * @n: number to be changed
  * @index: bit to be changed
  * Return: 1 if succeeded, -1 if error
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int base;

	if (n == NULL || index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	base = 1;
	if (index == 0)
	{
		if (*n >= 1)
		{
			*n -= 1;
			return (1);
		}
		return (-1);
	}
	while (index > 0)
	{
		base *= 2;
		index--;
	}
	if (*n >= base)
	{
		*n -= base;
		return (1);
	}
	return (-1);
}
