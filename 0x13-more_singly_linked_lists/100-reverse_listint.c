#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: pointer to head
  * Return: pointer to first node
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *p2;

	if (head == NULL)
		return (NULL);
	p2 = NULL;
	while (*head != NULL)
	{
		p = (*head)->next;
		(*head)->next = p2;
		p2 = *head;
		*head = p;
	}
	*head = p2;
	return (*head);
}
