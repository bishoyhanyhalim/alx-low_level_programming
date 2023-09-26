#include "lists.h"

/**
 * add_nodeint_end - put the soon test
 * @head: look for the first at list
 * @n: put the soon node testing
 *
 * Return: return the value of end add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *joy = *head;
	listint_t *soon;

	soon = malloc(sizeof(listint_t));

	if (!soon)
	{
		return (NULL);
	}

	soon->n = n;
	soon->next = NULL;

	if (*head == NULL)
	{
		*head = soon;
		return (soon);
	}

	while (joy->next)
		joy = joy->next;

	joy->next = soon;

	free(soon);
	return (soon);
}
