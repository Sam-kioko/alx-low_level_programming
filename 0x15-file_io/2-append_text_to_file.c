#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1
 * -1 If filename is NULL
 * If text_content is NULL, do not add anything to the file
 * 1 if the file exists and -1 if the file does not exist
 * r if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i = 0, p;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}

	p = write(fd, text_content, i);

	if (p == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
