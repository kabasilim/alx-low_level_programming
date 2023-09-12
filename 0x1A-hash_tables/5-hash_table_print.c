#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (comma)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (comma == 0)
					comma = 1;
			}
		}
	}
	printf("}\n");
}
