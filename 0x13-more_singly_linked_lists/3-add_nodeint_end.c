#include "lists.h"

/**
  * add_nodeint_end - adds a node at the end of the list
  * @head: pointer to head
  * @n: data to the structure
  * Return: pointer to the new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *last = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
