#include "main.h"
#include <stdlib.h>


/**
 * value_out - count number in string
 * @s: string to evaluate
 *
 * Return: number words index
 */
int value_out(char *s)
{
	int num = 0;
	int ray;
	int word = 0;

	for (ray = 0; s[ray] != '\0'; ray++)
	{
		if (s[ray] == ' ')
		{
			num = 0;
		}
		else if (num == 0)
		{
			num = 1;
			word++;
		}
	}

	return (word);
}

/**
 * **strtow - splits a string to pointer
 * @str: string to split
 *
 * Return: pointer strings
 */
char **strtow(char *str)
{
	char **msfofa, *value;
	int yes = 0, look = 0, you = 0;
	int letis, klas, jump, go;

	while (*(str + look))
		look++;

	jump = value_out(str);
	if (jump == 0)
	{
		return (NULL);
	}
	msfofa = (char **) malloc(sizeof(char *) * (jump + 1));
	if (msfofa == NULL)
	{
		return (NULL);
	}
	for (go = 0; go <= look; go++)
	{
		if (str[go] == ' ' || str[go] == '\0')
		{
			if (you)
			{
				klas = go;
				value = (char *) malloc(sizeof(char) * (you + 1));
				if (value == NULL)
					return (NULL);
				while (letis < klas)
					*value++ = str[letis++];
				*value = '\0';
				msfofa[yes] = value - you;
				yes++;
				you = 0;
			}
		}
		else if (you++ == 0)
			letis = go;
	}
	msfofa[yes] = NULL;
	return (msfofa);
}
