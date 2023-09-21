#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - this fun for node
 * @head: pointers for the node list
 * @str: add a str for node list
 *
 * Return: return the value head
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *cool;

	while (str[len])
	{
		len++;
	}

	cool = malloc(sizeof(list_t));

	if (!cool)
	{
		return (NULL);
	}

	cool->str = strdup(str);
	cool->len = len;
	cool->next = (*head);
	(*head) = cool;

	return (*head);
}
