#include "hash_tables.h"

/**
  * hash_table_delete - deletes hash table
  * @ht: hash table to delete
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *prev = NULL;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		prev = current;
		while (current != NULL)
		{
			current = current->next;
			free(prev->key);
			free(prev->value);
			free(prev);
			prev = current;
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
	current = NULL;
	prev = NULL;
}
