#include "lists.h"

/**
 * free_listint2 - this fun to free
 * @head: free the list form head
 */

void free_listint2(listint_t **head)
{
	listint_t *going;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		going = (*head)->next;

		free(*head);

		*head = going;
	}

	*head = NULL;
}
