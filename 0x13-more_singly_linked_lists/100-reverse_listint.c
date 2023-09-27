#include "lists.h"

/**
 * reverse_listint - look for the list
 * @head: look for the first char int list
 *
 * Return: return the value of code
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *backs = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = backs;

		backs = *head;
		*head = next;
	}

	*head = backs;

	return (*head);
}
