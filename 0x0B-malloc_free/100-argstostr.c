#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates prog
  *@ac: argument count
  *@av: pointer of array
  *Return: null code
  */
char *argstostr(int ac, char **av)
{
	int value = 0;
	int hello = 0;
	char *arg;
	int num;
	int cool;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < ac; num++)
	{
		for (cool = 0; av[num][cool]; cool++)
		{
			hello++;
		}
		hello++;
	}

	arg = malloc((sizeof(char) * hello) + 1);

	if (arg == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < ac; num++)
	{
		for (cool = 0; av[num][cool]; cool++)
		{
			arg[value++] = av[num][cool];
		}
		arg[value++] = '\n';
	}

	arg[value] = '\0';

	return (arg);
}
