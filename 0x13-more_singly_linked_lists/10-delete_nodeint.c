#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node located in idx
  * @head: pointer to head
  * @index: index of the node to be deleted
  * Return: 1 if succeeded, -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *p2;
	unsigned int i;

	if (head == NULL)
		return (-1);
	p = *head;
	p2 = *head;
	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = p->next;
		free(p);
		return (1);
	}
	for (i = 0; i < index && p != NULL; i++)
		p = p->next;
	if (i <= index && p == NULL)
		return (-1);
	for (i = 0; i < (index - 1); i++)
		p2 = p2->next;
	p2->next = p->next;
	free(p);
	return (1);
}
