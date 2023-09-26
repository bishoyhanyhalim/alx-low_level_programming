#include "lists.h"

/**
 * print_listint - printing the list of linked
 * @h: pointer for print list
 *
 * Return: return cool of list
 */

size_t print_listint(const listint_t *h)
{
	size_t cool = 0;

	while (h)
	{
		printf("%d\n", h->n);

		cool++;
		h = h->next;
	}

	return (cool);
}
