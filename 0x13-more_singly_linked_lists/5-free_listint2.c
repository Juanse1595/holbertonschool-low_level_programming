#include "lists.h"

/**
  * free_listint2 - frees a list of nodes
  * @head: pointer to head
  */

void free_listint2(listint_t **head)
{
	/* base case*/
	if (*head == NULL)
		return;
	/* recursive case */
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
