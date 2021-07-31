#include "lists.h"

/**
  * list_len - calculates the length of the list
  * @h: head pointer
  * Return: count of nodes
  */

size_t list_len(const list_t *h)
{
	size_t nodecount = 0;
	while (h != NULL)
	{
		nodecount++;
		h = h->next;
	}
	return (nodecount);
}
