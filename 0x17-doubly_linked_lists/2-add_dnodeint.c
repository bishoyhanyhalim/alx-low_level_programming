#include "lists.h"

/**
 * add_dnodeint - this func to ruturn the value
 *
 * @head: goes to head
 * @n: now handle whit n
 * 
 * Return: teturn the vlaue of number
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *this_n;
	dlistint_t *h;

	this_n = malloc(sizeof(dlistint_t));

	if (this_n == NULL)
		return (NULL);

	this_n->n = n;
	this_n->prev = NULL;
	h = *head;

	if (h != NULL)
	{

		while (h->prev != NULL)
			h = h->prev;

	}

	this_n->next = h;

	if (h != NULL)

		h->prev = this_n;

	*head = this_n;

	return (this_n);
}
