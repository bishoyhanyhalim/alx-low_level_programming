#include "lists.h"

/**
 * delete_nodeint_at_index - put the code list
 * @head: look for the first char int list
 * @index: this is index value
 *
 * Return: return the value of code
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int book = 0;
	listint_t *door = *head;
	listint_t *hot = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(door);
		return (1);
	}

	while (book < index - 1)
	{
		if (!door || !(door->next))
			return (-1);
		door = door->next;
		book++;
	}

	hot = door->next;
	door->next = hot->next;

	free(hot);

	return (1);
}
