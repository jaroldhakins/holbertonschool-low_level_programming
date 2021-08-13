#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * @filename: file.
 * @letters: Number of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ad, o_read, o_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	ad = open(filename, O_RDONLY);
	if (ad == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o_read = read(ad, buffer, letters);
	if (o_read == -1)
	{
		free(buffer);
		return (0);
	}
	o_write = write(STDOUT_FILENO, buffer, o_read);
	if (o_write == -1 || o_read != o_write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(ad);
	return (o_write);
}
