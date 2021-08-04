#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node
  * @head: head pointer
  * @index: index of the nth node to return
  * Return: pointer to the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
