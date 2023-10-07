#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - look filename for print it
 * @filename: look for the name of fun
 * @letters: this is the num for printing
 *
 * Return: return the value of print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *moon;
	ssize_t home, cool, going;

	if (filename == NULL)
	{
		return (0);
	}

	moon = malloc(sizeof(char) * letters);

	if (moon == NULL)
	{
		return (0);
	}

	cool = read(home, moon, letters);
	home = open(filename, O_RDONLY);
	going = write(STDOUT_FILENO, moon, cool);

	if (home == -1 || cool == -1 || going == -1 || going != cool)
	{
		free(moon);
		return (0);
	}

	free(moon);
	close(home);

	return (going);
}
