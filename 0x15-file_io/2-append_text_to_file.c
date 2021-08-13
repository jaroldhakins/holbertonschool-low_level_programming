#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rw, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		rw = write(fd, text_content, len);
		if (rw == -1)
		{
			close(fd);
			return (-1);
			
		}
		
	}
	close(fd);
	return (1);
}
