#include "hash_tables.h"

/**
 * hash_table_set - ok now this func
 *
 * @ht: this is the hash
 * @key: this is the key
 * @value: this is the value
 *
 * Return: return the value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nour;
	char *books;
	unsigned long int moons, i;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	books = strdup(value);

	if (books == NULL)
		return (0);

	moons = key_index((const unsigned char *)key, ht->size);

	for (i = moons; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);

			ht->array[i]->value = books;

			return (1);
		}
	}

	nour = malloc(sizeof(hash_node_t));

	if (nour == NULL)
	{
		free(books);
		return (0);
	}
	nour->key = strdup(key);
	if (nour->key == NULL)
	{
		free(nour);

		return (0);
	}
	nour->value = books;

	nour->next = ht->array[moons];

	ht->array[moons] = nour;

	return (1);
}
