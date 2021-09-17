#include "lists.h"

/**
  * dlistint_len - Calculate the length of a list
  * @h: header pointer
  * Return: number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes_count;

	for (nodes_count = 0; h != NULL; nodes_count++)
	{
		h = h->next;
	}
	return (nodes_count);
}
