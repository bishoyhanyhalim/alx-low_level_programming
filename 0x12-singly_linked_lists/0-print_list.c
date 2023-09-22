#include "lists.h"
#include <stdio.h>

/**
* print_list - this file for printing person
* @h: for h file to print
* Return: return the person value
*/

size_t print_list(const list_t *h)
{
	size_t person = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		person++;
	}

	return (person);
}

