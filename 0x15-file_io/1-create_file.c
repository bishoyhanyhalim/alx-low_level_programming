#include "main.h"

/**
 * create_file - do some files
 * @filename: this is ths file name
 * @text_content: this is ths text
 *
 * Return: return the value for file
 */

int create_file(const char *filename, char *text_content)
{
	int jamp = 0;
	int nice;
	int fosh;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (jamp = 0; text_content[jamp];)
		{
			jamp++;
		}
	}

	nice = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	fosh = write(nice, text_content, jamp);

	if (nice == -1 || fosh == -1)
	{
		return (-1);
	}

	close(nice);

	return (1);
}
