#include <fcntl.h>
#include "main.h"

/**
 * create_file - open new file
 * @filename: look at the num of file
 * @text_content: this the point to str
 *
 * Return: return the value of write print
 */

int create_file(const char *filename, char *text_content)
{
	int hello = 0;
	int jump;
	int cool;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (hello = 0; text_content[hello];)
		{
			hello++;
		}
	}

	jump = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	cool = write(jump, text_content, hello);

	if (cool == -1 || jump == -1)
	{
		return (-1);
	}

	close(jump);

	return (1);
}
