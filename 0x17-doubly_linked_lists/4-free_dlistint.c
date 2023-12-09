#include "lists.h"

/**
 * free_dlistint - to bake the free
 *
 * @head: handle whit ars
 * Return: free the vlaue
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *books;

	if (head != NULL)

		while (head->prev != NULL)
			head = head->prev;

	while ((books = head) != NULL)
	{

		head = head->next;

		free(books);

	}
}
