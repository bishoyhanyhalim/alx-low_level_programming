#include "hash_tables.h"

/**
 * hash_table_create - now this is a func
 *
 * @size: This an array good
 *
 * Return: return finally the value
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hellos;
	unsigned long int numss;

	hellos = malloc(sizeof(hash_table_t));
	if (hellos == NULL)

		return (NULL);

	hellos->size = size;

	hellos->array = malloc(sizeof(hash_node_t *) * size);

	if (hellos->array == NULL)
		return (NULL);

	for (numss = 0; numss < size; numss++)
		hellos->array[numss] = NULL;

	return (hellos);
}
