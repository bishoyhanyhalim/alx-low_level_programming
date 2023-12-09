#include "lists.h"

/**
 * print_dlistint - this func to print totalsss
 *
 * @h: no handle whit h
 * Return: finally return value
 */
size_t print_dlistint(const dlistint_t *h)
{
	int totalss;

	totalss = 0;


	if (h == NULL)
		return (totalss);


	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		totalss++;
		h = h->next;

	}

	return (totalss);
}
