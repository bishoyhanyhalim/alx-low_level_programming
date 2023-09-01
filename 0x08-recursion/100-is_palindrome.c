#include "main.h"

int function(char *s, int i, int len);
int recursion(char *s);

/**
 * is_palindrome - checks if palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (function(s, 0, recursion(s)));
}

/**
 * recursion - returns the length string
 * @s: string to calculate
 *
 * Return: length of the string
 */
int recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + recursion(s + 1));
}

/**
 * function - checks the characters recursively
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrom
 */
int function(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (function(s, i + 1, len - 1));
}
