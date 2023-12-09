#include "lists.h"

/**
 * get_dnodeint_at_index - now git the vlaue of
 *
 * @head: handle with the h
 * @index: handle whit the ind variable
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int moons;

	if (head == NULL)

		return (NULL);

	while (head->prev != NULL)

		head = head->prev;

	moons = 0;

	while (head != NULL)
	{

		if (moons == index)
			break;

		head = head->next;
		moons++;

	}

	return (head);
}
