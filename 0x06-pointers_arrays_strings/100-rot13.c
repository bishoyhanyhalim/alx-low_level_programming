#include "main.h"

/**
 * rot13 - encodes a string in code
 * @go: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *go)
{
	int num;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = go;

	while (*go)
	{
		for (num = 0; num <= 52; num++)
		{
			if (*go == rot13[num])
			{
				*go = ROT13[num];
				break;
			}
		}
		go++;
	}
	return (ptr);
}
