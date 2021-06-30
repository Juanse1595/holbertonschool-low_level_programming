#include "holberton.h"
/**
 * _strcpy - copies one string to another
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: pointer to the beginning of the resulting string
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
