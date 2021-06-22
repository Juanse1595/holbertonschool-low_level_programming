#include "holberton.h"

/**
 * _isalpha - tells if it is a letter
 * @c: given char
 * Description: tells if the given char is a letter or anything else
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 65 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
