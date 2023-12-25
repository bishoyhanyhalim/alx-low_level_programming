#include "hash_tables.h"

/**
 * hash_table_delete - free all things
 *
 * @ht: this is free hash
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *nice;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node != NULL)
			{
				nice = node->next;

				free(node->key);

				free(node->value);

				free(node);

				node = nice;
			}
		}
	}
	free(head->array);

	free(head);
}
