#include "main.h"

/**
 * rot13 - encodes a string in code
 * @do: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *do)
{
	int num;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = do;

	while (*do)
	{
		for (num = 0; num <= 52; num++)
		{
			if (*do == rot13[num])
			{
				*do = ROT13[num];
				break;
			}
		}
		do++;
	}
	return (ptr);
}
