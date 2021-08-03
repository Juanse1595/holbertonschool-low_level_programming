#include "lists.h"

/**
  * free_listint - frees a list of nodes
  * @head: direction head is pointing to
  */

void free_listint(listint_t *head)
{
	/* base case */
	if (head == NULL)
		return;

	/* recursive case */
	free_listint(head->next);
	free(head);
}
