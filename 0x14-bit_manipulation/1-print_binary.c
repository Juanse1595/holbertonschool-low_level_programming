#include "main.h"

/**
  * print_binary - prints an unsigned int as binary
  * @n: number to convert
  */

void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int i;

	aux = n;
	i = (sizeof(unsigned long int) * 8) - 1;
	while (((n >> i) & 1) == 0 && i != 0)
		i--;
	while (i >= 0)
	{
		aux = (aux >> i) & 1;
		_putchar('0' + aux);
		i--;
		aux = n;
	}
}
