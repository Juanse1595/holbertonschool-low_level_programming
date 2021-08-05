#include "main.h"

/**
  * get_bit - gets the value of a bit at a gvein index
  * @n: integer whose indexth bit needs to be retrieved
  * @index: position of the bit
  * Return: value of the bit
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return ((n >> index) & 1);
}
