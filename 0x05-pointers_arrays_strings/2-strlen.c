#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length
 */
int _strlen(char *s)
{
	int h = 0;

	while (s[h] != '\0')
	{
		h++;
	}
	return (h);
}
