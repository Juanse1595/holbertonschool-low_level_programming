#include "holberton.h"
/**
 * _strncat - appends n bytes of a string to another
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes
 * Return: a char * pointing to the start of destiny string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *aux = dest;
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (aux);
}
