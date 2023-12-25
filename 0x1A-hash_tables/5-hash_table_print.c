#include "hash_tables.h"

/**
 * hash_table_print - now this func of print
 *
 * @ht: this is the hash
 *
 * Description: return the value
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *goes;
	unsigned char lock = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (lock == 1)
				printf(", ");

			goes = ht->array[i];

			while (goes != NULL)
			{
				printf("'%s': '%s'", goes->key, goes->value);

				goes = goes->next;

				if (goes != NULL)
					printf(", ");
			}

			lock = 1;
		}
	}

	printf("}\n");
}
