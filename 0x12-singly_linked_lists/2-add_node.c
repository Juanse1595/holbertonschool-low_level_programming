#include "lists.h"

/**
  * add_node - adds a new node to the head
  * @head: pointer to head
  * @str: string to asign to the new node
  * Return: pointer to the new node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (length = 0; str[length]; length++)
	{}
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
