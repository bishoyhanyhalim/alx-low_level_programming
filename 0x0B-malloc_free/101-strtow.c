#include "main.h"
#include <stdlib.h>

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

	jump = count_word(str);
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

