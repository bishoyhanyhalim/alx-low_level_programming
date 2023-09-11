#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * puss - give the name of string
 * @hello: name of string hello
 * Return: go if finsh the loop
 */

int puss(char *hello)
{
	int go = 0;

	while (hello[go] != '\0')
	{
		go++;
	}

	return (go);
}


/**
 * *newcopy - for copy the name
 * @uno: name of char fun
 * @nano: help fun to copy
 * Return: finally result
 */

char *newcopy(char *uno, char *nano)
{
	int num1 = 0;
	int num2;

	while (nano[num1] != '\0')
	{
		num1++;
	}

	for (num2 = 0; num2 < num1; num2++)
	{
		uno[num2] = nano[num2];
	}

	uno[num2] = '\0';
	return (uno);
}


/**
 * new_dog - add a new dogs
 * @name: print dog name
 * @age: print dog age of pointer
 * @owner: print dog owner
 *
 * Return: the result of end
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog2;
	int total1;
	int total2;

	total1 = puss(name);
	total2 = puss(owner);

	newdog2 = malloc(sizeof(dog_t));

	if (newdog2 == NULL)
		return (NULL);

	newdog2->name = malloc(sizeof(char) * (total1 + 1));

	if (newdog2->name == NULL)
	{
		free(newdog2);
		return (NULL);
	}

	newdog2->owner = malloc(sizeof(char) * (total2 + 1));

	if (newdog2->owner == NULL)
	{
		free(newdog2);
		free(newdog2->name);
		return (NULL);
	}

	_strcpy(newdog2->name, name);
	_strcpy(newdog2->owner, owner);
	newdog2->age = age;

	return (newdog2);
}
