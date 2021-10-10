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
	hash_node_t *new_node = NULL;

	cp_key = strdup(key);
	if (cp_key == NULL || *cp_key == '\0')
		return (0);
	index = key_index((unsigned char *)cp_key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	cp_value = malloc(strlen(value) + 1);
	strcpy(cp_value, value);
	new_node->key = cp_key;
	new_node->value = cp_value;
	if (ht->array[index] != NULL) /*in case of collision*/
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}
