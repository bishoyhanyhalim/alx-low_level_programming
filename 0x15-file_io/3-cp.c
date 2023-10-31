#include "main.h"


/**
 * clo_ser_fileing - now close files
 * @booksing: this is a file
 */

void clo_ser_fileing(int booksing)
{
	int ask;

	ask = close(booksing);

	if (ask == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", booksing);

		exit(100);
	}
}


/**
 * the_host_buff - make func one
 * @tarsh: make file now
 *
 * Return: return new pointer
 */

char *the_host_buff(char *tarsh)
{
	char *book;

	book = malloc(sizeof(char) * 1024);

	if (book == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", tarsh);

		exit(99);
	}

	return (book);
}


/**
 * main - now lets make file work
 * @argc: this is a arg
 * @argv: this is an arg
 *
 * Return: retrun the vlaue files
 */

int main(int argc, char *argv[])
{
	int fost, mast, host, nost;
	char *liky;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	liky = the_host_buff(argv[2]);
	host = open(argv[1], O_RDONLY);
	fost = read(host, liky, 1024);
	nost = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (host == -1 || fost == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(liky);
			exit(98);
		}

		mast = write(nost, liky, fost);
		if (nost == -1 || mast == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(liky);
			exit(99);
		}

		fost = read(host, liky, 1024);
		nost = open(argv[2], O_WRONLY | O_APPEND);

	} while (fost > 0);
	free(liky);
	clo_ser_fileing(host);
	clo_ser_fileing(nost);
	return (0);
}

