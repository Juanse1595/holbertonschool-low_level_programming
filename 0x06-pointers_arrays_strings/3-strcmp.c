#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: first sitrng
 * @s2: second string
 * Return: an int greater, equal or less than 0 depending
 * on the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while ((s1[i] - s2[i]) == 0 && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
