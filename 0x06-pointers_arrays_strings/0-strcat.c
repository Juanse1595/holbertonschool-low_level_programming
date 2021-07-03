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
	for (j = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (aux);
}
