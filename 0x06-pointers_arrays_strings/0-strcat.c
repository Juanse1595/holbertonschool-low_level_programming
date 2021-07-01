#include "holberton.h"
/**
 * _strcat - appends one string to another
 * @dest - destiny string
 * @src - source string
 * Return: a pointer to the destiny string
 */

char *_strcat(char *dest, char *src)
{
	char *aux = dest;
	int i, j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
	}
	_putchar('\0');
}
