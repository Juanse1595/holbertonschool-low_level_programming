#include "lists.h"

/**
  * get_dnodeint_at_index - Returns the nth node
  * @head: head pointer
  * @index: index of the node to return
  * Return: pointer to the nth node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
