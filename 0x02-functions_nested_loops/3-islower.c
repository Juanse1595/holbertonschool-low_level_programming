#include "holberton.h"

/**
 * _islower - Tells if a letter is lowercase
 * @c: the given letter
 *
 * Description: Returns a value depending if the given letter
 * is lowercase or not. Returns 1 if is lowercase, 0 otherwise
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
