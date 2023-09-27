#include "lists.h"

/**
 * get_nodeint_at_index - print the number of code
 * @head: used for head the list
 * @index: used for the index the list
 *
 * Return: return the value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *part = head;
	unsigned int sums = 0;

	while (part && sums < index)
	{
		part = part->next;
		sums++;
	}

	return (part ? part : NULL);
}
