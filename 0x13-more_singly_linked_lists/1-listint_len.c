#include "lists.h"

/**
 * listint_len - printing the list of linked
 * @h: pointer for print list
 *
 * Return: return cool of list
 */

size_t listint_len(const listint_t *h)
{
	size_t home = 0;

	while (h)
	{
		home++;
		h = h->next;
	}

	return (home);
}
