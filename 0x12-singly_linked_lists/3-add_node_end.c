#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - list of node
 * @head: this is head for list
 * @str: move str to list
 *
 * Return: return the value
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *going = *head;
	list_t *hant;
	unsigned int len = 0;

	while (str[len])
		len++;

	hant = malloc(sizeof(list_t));

	if (!hant)
	{
		return (NULL);
	}

	hant->next = NULL;
	hant->len = len;
	hant->str = strdup(str);

	if (*head == NULL)
	{
		*head = hant;
		return (hant);
	}

	while (going->next)
		going = going->next;

	going->next = hant;

	return (hant);
}
