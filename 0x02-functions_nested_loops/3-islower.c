#include "holberton.h"

/**
 * _islower - Tells if a letter is lowercase
 * Description: Returns a value depending if the given letter
 * is lowercase or not. Returns 1 if is lowercase, 0 otherwise
 * Returns 1 if lowercase, 0 otherwise
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
