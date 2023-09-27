#include "lists.h"

/**
 * sum_listint - print the cools of value
 * @head: used for head the list
 *
 * Return: return the cools value
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int cools = 0;

	while (temp)
	{
		cools += temp->n;
		temp = temp->next;
	}

	return (cools);
}
