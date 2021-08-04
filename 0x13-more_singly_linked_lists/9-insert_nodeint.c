#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node at idx
  * @head: pointer to head
  * @idx: index where new node will appear
  * @n: data of new node
  * Return: pointer to new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *p2;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	p2 = malloc(sizeof(listint_t));
	if (p2 == NULL)
		return (NULL);
	p = *head;
	p2->n = n;
	if (idx == 0)
	{
		p2->next = *head;
		*head = p2;
		return (p2);
	}
	for (i = 0; i < (idx - 1) && p->next != NULL; i++)
		p = p->next;
	if (p->next == NULL && i < (idx - 1))
	{
		free(p2);
		return (NULL);
	}
	p2->next = p->next;
	p->next = p2;
	return (p2);
}
