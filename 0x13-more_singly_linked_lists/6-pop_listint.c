#include "lists.h"

/**
  * pop_listint - deletes the first node and return its data
  * @head: pointer to head
  * Return: data of deleted node
  */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (0);
	p = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(p);
	p = NULL;
	return (n);
}
