#include "hash_tables.h"

/**
  * hash_table_get - gets the value of a node in a hash
  * table
  * @ht: hash table
  * @key: key of the wanted value
  * Return: wanted value, or NULL if key doesn't exist
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_pointer = NULL;

	index = key_index((unsigned char *)key, ht->size);
	node_pointer = ht->array[index];
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, key) == 0)
			return (node_pointer->value);
		node_pointer = node_pointer->next;
	}
	return (NULL);
}
