#include "hash_tables.h"

/**
 * key_index - gives an index of a key
 * @key: key
 * @size: size of the hash table
 * Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	/*unsigned long int index = (hash) & (size - 1);*/
	unsigned long int index = hash % size;

	return (index);
}
