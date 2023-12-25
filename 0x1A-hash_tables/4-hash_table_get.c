#include "hash_tables.h"

/**
 * hash_table_get - now this func of hash
 *
 * @ht: this is the hash
 * @key: this is the key
 *
 * Return: return the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hellos;
	unsigned long int where;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	where = key_index((const unsigned char *)key, ht->size);

	if (where >= ht->size)
		return (NULL);

	hellos = ht->array[where];

	while (hellos && strcmp(hellos->key, key) != 0)
		hellos = hellos->next;

	return ((hellos == NULL) ? NULL : hellos->value);
}
