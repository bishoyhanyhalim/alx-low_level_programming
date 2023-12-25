#include "hash_tables.h"

/**
 * key_index - this is func index
 *
 * @key: this a key for help
 * @size: now it is a size of func
 *
 * Return: return the value finally
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
