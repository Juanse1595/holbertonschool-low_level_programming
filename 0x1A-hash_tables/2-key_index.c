#include "hash_tables.h"

/**
  * key_index - Returns the index of the hash table where
  * the given key will be located
  * @key: given key
  * @size: size of the array
  * Return: index
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
