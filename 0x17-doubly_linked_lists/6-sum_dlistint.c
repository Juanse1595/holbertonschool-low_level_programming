#include "lists.h"

/**
  * sum_dlistint - Sums all the data of the nodes of a list
  * @head: head pointer
  * Return: Sum
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
