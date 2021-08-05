#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: pointer to the number
  * @index: index of the bit to be changed
  * Return: Result
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int base;

	if (n == NULL || index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	base = 1;
	if (index == 0)
	{
		*n += 1;
		return (1);
	}
	while (index > 0)
	{
		base *= 2;
		index--;
	}
	*n += base;
	return (1);
}
