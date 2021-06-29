#include "holberton.h"
/**
 * _strlen - returns the length if a string
 * @s: address to the string first char
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{}
	return (i);
}
