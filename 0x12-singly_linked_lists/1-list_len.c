#include "lists.h"
#include <stdlib.h>

/**
 * list_len - give the list numbers
 * @h: this for h fun
 *
 * Return: return sum of sun
 */

size_t list_len(const list_t *h)
{
	size_t sun = 0;

	while (h)
	{
		sun++;

		h = h->next;
	}

	return (sun);
}
