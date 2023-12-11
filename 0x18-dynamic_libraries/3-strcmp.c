#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1
 */
int _strcmp(char *s1, char *s2)
{
	int num = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			num = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (num);
}
