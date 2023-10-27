#include "main.h"

/**
 * binary_to_uint - this is func to convert bit to num
 * @b: pointer to main func
 *
 * Return: value of number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int home = 0;
	int go;

	if (b == NULL)
	{
		return (0);
	}

	for (go = 0; b[go] != '\0'; go++)
	{
		if (b[go] != '1' && b[go] != '0')
		{
			return (0);
		}

		if (b[go] == '1')
		{
			home = (home << 1) | 1;
		}

		if (b[go] == '0')
		{
			home = (home << 1);
		}
	}

	return (home);
}
