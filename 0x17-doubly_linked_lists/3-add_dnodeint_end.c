#include "lists.h"

/**
 * add_dnodeint_end - this func to return the value
 *
 * @head: goes to head
 * @n: now handle whit n
 * 
 * Return: return the value of number
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *fooly;

	fooly = malloc(sizeof(dlistint_t));

	if (fooly == NULL)
		return (NULL);

	fooly->n = n;

	fooly->next = NULL;

	h = *head;

	if (h != NULL)
	{

		while (h->next != NULL)
			h = h->next;
		h->next = fooly;

	}

	else
	{

		*head = fooly;

	}

	fooly->prev = h;

	return (fooly);
}
