#include "lists.h"

/**
  * add_dnodeint_end - Add new node to the ende of the list
  * @head: double pointer to head
  * @n: data of new node
  * Return: new node pointer
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *prev_node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	prev_node = *head;
	while (prev_node->next != NULL)
		prev_node = prev_node->next;
	new->prev = prev_node;
	prev_node->next = new;
	return (new);
}
