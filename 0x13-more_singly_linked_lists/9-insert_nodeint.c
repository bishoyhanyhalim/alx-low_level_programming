#include "lists.h"

/**
 * insert_nodeint_at_index - put the code list
 * @head: look for the wall number
 * @idx: be4f kam el index
 * @n: add the list in nice ind
 *
 * Return: pointer to the nice node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hat = *head;
	listint_t *nice;
	unsigned int book;

	nice = malloc(sizeof(listint_t));

	if (!nice || !head)
	{
		return (NULL);
	}

	nice->n = n;
	nice->next = NULL;

	if (idx == 0)
	{
		nice->next = *head;
		*head = nice;

		return (nice);
	}

	for (book = 0; hat && book < idx; book++)
	{
		if (book == idx - 1)
		{
			nice->next = hat->next;
			hat->next = nice;
			return (nice);
		}
		else
		{
			hat = hat->next;
		}
	}

	return (NULL);
	free(nice);
}

