#include "lists.h"

/**
 * free_listint - this fun to free
 * @head: free the list form head
 */

void free_listint(listint_t *head)
{
	listint_t *hello;

	while (head)
	{
		hello = head->next;

		free(head);
		head = hello;
	}
}
