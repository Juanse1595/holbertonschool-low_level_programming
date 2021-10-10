#include "hash_tables.h"

/**
  * hash_table_set - add an element to the hash table
  * @ht: hash table
  * @key: key of the new node
  * @value: value of the new node
  * Return: 1 if success, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cp_value = NULL, *cp_key = NULL;
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *node_pointer = NULL;

	cp_key = strdup(key);
	if (key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)cp_key, ht->size);
	cp_value = malloc(strlen(value) + 1);
	strcpy(cp_value, value);
	/* in case the key already exists */
	node_pointer = ht->array[index];
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, cp_key) == 0)
		{
			node_pointer->value = cp_value;
			return (1);
		}
		node_pointer = node_pointer->next;
	}

	/* in case the key is unique */
	new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
	new_node->key = cp_key;
	new_node->value = cp_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
