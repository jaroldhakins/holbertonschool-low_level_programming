#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _error - Read file.
 * @e: Error number
 * @filename: File name
 */
void err(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * cp - Copies the content of a file to another file.
 * @file_from: from is going to be copy
 * @file_to: destination
 * Return: if success 1, if don't succes 0
 */
void cp(char *file_from, char *file_to)
{
	int fd_r, bfr, fd_w, bfw;
	char *buf[1024];

	fd_r = open(file_from, O_RDONLY);
	if (fd_r < 0)
	{
		err(98, file_from);
	}
	fd_w = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_w < 0)
	{
		close(fd_r);
		err(99, file_to);
	}
	do {
		bfr = read(fd_r, buf, 1024);
		if (bfr < 0)
		{
			err(98, file_from);
		}
		bfw = write(fd_w, buf, bfr);
		if (bfw < bfr)
		{
			err(99, file_to);
		}
	} while (bfw == 1024);
	if (close(fd_r) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		close(fd_w);
		exit(100);
	}
	if (close(fd_w) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count
 * @av: argument values
 * Return: 0 on succes, -1 on error.
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
