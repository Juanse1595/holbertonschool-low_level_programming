#include "lists.h"

/**
  * add_nodeint - add a new node at the beginning of a lsit
  * @head: pointer to head
  * @n: data for the new node
  * Return: address to new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = NULL;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
