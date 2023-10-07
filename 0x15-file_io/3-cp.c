#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * end_of_files - end the file after write
 * @going: help file to close
 */

void end_of_files(int going)
{
	int book;

	book = close(going);

	if (book == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", going);
		exit(100);
	}
}

/**
 * Cer_bit_For - define the numbers of bits
 * @home: called the cher of bits
 *
 * Return: return the value of bits
 */

char *Cer_bit_For(char *home)
{
	char *useBitFor;

	useBitFor = malloc(sizeof(char) * 1024);

	if (useBitFor == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", home);

		exit(99);
	}

	return (useBitFor);
}

/**
 * main - make the file cp to the other
 * @argc: this the number of the array
 * @argv: this is an array of fun
 *
 * Return: return the value
 */
int main(int argc, char *argv[])
{
	int moons, look, hombook, note;
	char *trash;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	trash = Cer_bit_For(argv[2]);
	moons = open(argv[1], O_RDONLY);
	hombook = read(moons, trash, 1024);
	look = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (moons == -1 || hombook == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(trash);
			exit(98);
		}
		note = write(look, trash, hombook);
		if (look == -1 || note == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(trash);
			exit(99);
		}
		hombook = read(moons, trash, 1024);
		look = open(argv[2], O_WRONLY | O_APPEND);

	} while (hombook > 0);

	free(trash);
	end_of_files(moons);
	end_of_files(look);

	return (0);
}
