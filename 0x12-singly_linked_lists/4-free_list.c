#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: pointer to head
  */

void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
}
