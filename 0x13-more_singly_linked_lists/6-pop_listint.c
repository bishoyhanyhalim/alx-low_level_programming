#include "lists.h"

/**
 * pop_listint - make the list link free
 * @head: look for the list
 *
 * Return: return the value of rote
 */

int pop_listint(listint_t **head)
{
	int rote;
	listint_t *hello;

	if (!*head || !head)
	{
		return (0);
	}

	rote = (*head)->n;

	hello = (*head)->next;

	free(*head);
	*head = hello;

	return (rote);
}
