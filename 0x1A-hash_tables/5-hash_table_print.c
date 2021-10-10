#include "hash_tables.h"

/**
  * hash_table_print - prints hash table
  * @ht: hash table
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int flag = 0;
	hash_node_t *node_pointer;

	if (ht == NULL)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node_pointer = ht->array[idx];
		while (node_pointer != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
				flag = 0;
			}
			printf("'%s': '%s'", node_pointer->key, node_pointer->value);
			flag++;
			node_pointer = node_pointer->next;
		}
	}
	printf("}\n");
}
