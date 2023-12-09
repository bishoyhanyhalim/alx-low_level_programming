#include "lists.h"

/**
 * dlistint_len -  this func to print totalss
 * 
 * @h: now handle whit h
 * Return: finally return value
 */

size_t dlistint_len(const dlistint_t *h)
{

	int nices;

	nices = 0;

	if (h == NULL)
		return (nices);


	while (h->prev != NULL)
		h = h->prev;


	while (h != NULL)
	{

		nices++;
		h = h->next;

	}

	return (nices);
}
