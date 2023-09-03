#include "main.h"

/**
 * _isalpha - alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a lette
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
