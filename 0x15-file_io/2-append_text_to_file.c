#include "main.h"

/**
 * append_text_to_file - doing some files
 * @filename: this is ths file name
 * @text_content: this is ths text
 *
 * Return: return the value of
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int looking;
	int voids = 0;
	int sun;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (voids = 0; text_content[voids];)
		{
			voids++;
		}
	}

	looking = open(filename, O_WRONLY | O_APPEND);

	sun = write(looking, text_content, voids);

	if (looking == -1 || sun == -1)
	{
		return (-1);
	}

	close(looking);

	return (1);
}
