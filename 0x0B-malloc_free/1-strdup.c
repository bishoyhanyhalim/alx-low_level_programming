#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates the string
 * @str: string to duplicate
 *
 * Return: pointer of duplicated
 */

char *_strdup(char *str)
{
	char *hello;
	unsigned int num, go;

	num = 0;
	go = 0;

	if (str == NULL)
		return (NULL);

	while (str[go])
		go++;

	hello = malloc(sizeof(char) * (go + 1));

	if (hello == NULL)
		return (NULL);

	while ((hello[num] = str[num]) != '\0')
		num++;

	return (hello);
}
