#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of the list
  * @head: double pointer to head pointer
  * @n: data of the new node
  * Return: head pointer
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
