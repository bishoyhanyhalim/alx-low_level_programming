i#include "lists.h"

/**
 * delete_nodeint_at_index - put the code list
 * @head: look for the first char int list
 * @index: this is index value
 *
 * Return: return the value of code
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int goby = 0;
	listint_t *moons = NULL;
	listint_t *full = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(full);
		return (1);
	}

	while (goby < index - 1)
	{
		if (!full || !(full->next))
		{
			return (-1);
		}
		full = full->next;
		goby++;
	}

	moons = full->next;
	full->next = moons->next;

	free(moons);

	return (1);
}
