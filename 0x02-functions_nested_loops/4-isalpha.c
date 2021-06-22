#include "holberton.h"

/**
 * _isalpha - 
 * Description: 
 * Return:
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
