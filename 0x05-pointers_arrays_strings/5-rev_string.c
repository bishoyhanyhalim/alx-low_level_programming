#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string  reversed
 */
void rev_string(char *s)
{
	char tmp;
	int t, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (t = 0; t < len / 2; t++)
	{
		tmp = s[t];
		s[t] = s[len1];
		s[len1--] = tmp;
	}
}
