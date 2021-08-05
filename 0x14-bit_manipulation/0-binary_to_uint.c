#include "main.h"

/**
  * binary_to_uint - converts a binary to unsigned int
  * @b: binary in string format
  * Return: binary converted to positive int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int exp, result;
	int idx;

	if (b == NULL || *b == '\0')
		return (0);
	result = 0, exp = 1;
	for (idx = 0; b[idx + 1]; idx++)
	{}
	if (b[idx] == '1')
		result = result + 1;
	idx--;
	while (idx >= 0)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		if (b[idx] == '1')
			result = result + pow2(exp);
		exp++, idx--;
	}
	return (result);
}

/**
  * pow2 - Returns 2 to the power of exp
  * @exp: exponent
  * Return: 2 to the power of exp
  */

unsigned int pow2(unsigned int exp)
{
	unsigned int base = 1;

	while (exp > 0)
	{
		base = base * 2;
		exp--;
	}
	return (base);
}
