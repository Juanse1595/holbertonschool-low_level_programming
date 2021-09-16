#include "lists.h"

/**
  * print_dlistint - Prints all elements of a list
  * @h: header pointer
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
    int nodes_count;
    for (nodes_count = 0; h != NULL; nodes_count++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
    return (nodes_count);
}
