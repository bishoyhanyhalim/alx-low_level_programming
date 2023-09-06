#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies of the string
 * @str: string to duplicate
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *value = malloc(strlen(str) + 1);

	if (value == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(value, str);
	return (value);
}
