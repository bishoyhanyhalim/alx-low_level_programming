#include "lists.h"

/**
* print_list - this file for printing person
* @h: for h file to print
* Return: return the person value
*/

size_t print_list(const list_t *h)
{
	size_t person;
	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		person++;
	}
	return (person);
}

