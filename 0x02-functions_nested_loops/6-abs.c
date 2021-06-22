#include "holberton.h"

/**
 * _abs - Gives the absolute value of an integer
 * @n: the given integer
 * Description: Recieves an integer and return the absolute
 * value of it
 * Return: the absolute value of c
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
