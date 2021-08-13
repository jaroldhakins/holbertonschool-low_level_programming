#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * create_file - Creates a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to write to the file.
 * Return: if succes 1, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t nb;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
			len++;
		nb = write(fd, text_content, len);
		if (nb == -1 || fd == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
