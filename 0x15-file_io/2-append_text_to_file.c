#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - this is a open file
 * @filename: look for the file name
 * @text_content: print the test of tile
 *
 * Return: return the value of write output
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int house = 0;
	int nice;
	int tool;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (house = 0; text_content[house];)
		{
			house++;
		}
	}

	tool = open(filename, O_WRONLY | O_APPEND);

	nice = write(tool, text_content, house);

	if (tool == -1 || nice == -1)
	{
		return (-1);
	}

	close(tool);

	return (1);
}
