#include "main.h"

/**
  * flip_bits - Finds the number of bits that need to flip
  * to get from one number to another
  * @n: first number
  * @m: second number
  * Return: number of bits to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	count = 0;
	result = n ^ m;
	while (result > 0)
	{
		if ((result & 1) == 1)
			count++;
		result >>= 1;
	}
	return (count);
}
