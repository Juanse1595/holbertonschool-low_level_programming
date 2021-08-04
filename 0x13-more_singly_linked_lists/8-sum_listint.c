#include "lists.h"

/**
  * sum_listint - sums the data of a linked list
  * @head: head pointer
  * Return: sum of the data
  */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
