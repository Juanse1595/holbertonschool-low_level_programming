#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node in idx
  * @h: pointer to header pointer
  * @idx: index of the new node
  * @n: data of the new node
  * Return: pointer to new node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current, *prev_node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	while (i < idx)
	{
		if (current == NULL)
			return (NULL);
		if (current->next == NULL)
			prev_node = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		new->next = NULL;
		new->prev = prev_node;
		prev_node->next = new;
		return (new);
	}
	new->next = current;
	new->prev = current->prev;
	(current->prev)->next = new;
	current->prev = new;
	return (new);
}
