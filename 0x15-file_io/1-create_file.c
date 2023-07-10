#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i = 0, p;

	if (filename ==  NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

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
