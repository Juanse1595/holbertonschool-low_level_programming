#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

/**
 * new_dog - creates a new dog structure
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: pointer to the new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));
	char *namecpy = NULL, *ownercpy = NULL;

	if (p == NULL)
		return (NULL);

	namecpy = malloc(_strlen(name) + 1);
	if (namecpy == NULL)
	{
		free(namecpy);
		free(p);
		return (NULL);
	}
	else
	{
		p->name = _strcpy(namecpy, name);
	}
	p->age = age;
	ownercpy = malloc(_strlen(owner) + 1);
	if (ownercpy == NULL)
	{
		free(ownercpy);
		free(p);
		return (NULL);
	}
	else
	{
		p->owner = _strcpy(ownercpy, owner);
	}
	return (p);
}
