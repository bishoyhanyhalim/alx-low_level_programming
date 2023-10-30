#include "main.h"


/**
 * read_textfile - read the texting
 * @filename: this is ths file
 * @letters: this is the letters
 *
 * Return: return the value whin finch
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *boll;
	ssize_t loky;
	ssize_t group;
	ssize_t going;

	if (filename == NULL)
	{
		return (0);
	}

	boll = malloc(sizeof(char) * letters);
	if (boll == NULL)
	{
		return (0);
	}

	group = open(filename, O_RDONLY);

	loky = read(group, boll, letters);

	going = write(STDOUT_FILENO, boll, loky);

	if (group == -1 ||  going == -1  || loky == -1 || going != loky)
	{
		free(boll);

		return (0);
	}

	free(boll);
	close(group);

	return (going);
}
