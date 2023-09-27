#include "lists.h"

/**
 * find_listint_loop - look the loop int the list
 * @head: head for look the list
 *
 * Return: return the value
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *going = head;
	listint_t *backing = head;

	if (!head)
	{
		return (NULL);
	}

	while (going && backing && going->next)
	{
		going = going->next->next;
		backing = backing->next;

		if (going == backing)
		{
			backing = head;
			while (backing != going)
			{
				backing = backing->next;
				going = going->next;
			}

			return (going);
		}
	}

	return (NULL);
}
