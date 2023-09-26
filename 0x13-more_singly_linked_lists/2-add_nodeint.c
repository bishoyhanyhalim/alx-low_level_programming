#include "lists.h"

/**
 * add_nodeint - put the new test
 * @head: look for the first at list
 * @n: put the new node test
 *
 * Return: return the value of end
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *moon;

	moon = malloc(sizeof(listint_t));

	if (!moon)
	{
		return (NULL);
	}

	moon->n = n;
	moon->next = *head;
	*head = moon;

	return (moon);
}
