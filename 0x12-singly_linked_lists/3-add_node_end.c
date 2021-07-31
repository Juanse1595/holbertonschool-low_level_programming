#include "lists.h"

/**
  * add_node_end - adds a new node at the end
  * @head: pointer to head pointer
  * @str: string to add to new node
  * Return: pointer to new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *last_node;
	int length;

	for (length = 0; str[length]; length++)
	{}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
		(*head) = new_node;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);

}
