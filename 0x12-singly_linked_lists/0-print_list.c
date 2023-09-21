#include "lists.h"
#include <stdio.h>

/**
 * print_list - this fun to print list
 * @h: print the point of node listing
 *
 * Return: give the number of value
 */

size_t print_list(const list_t *h)
{
	size_t moon = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		moon++;
	}

	return (moon);
}
