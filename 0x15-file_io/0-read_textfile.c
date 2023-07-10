#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file to read
 * @letters:  the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t k, m;
	char *buf = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	k = read(fd, buf, letters);

	if (k == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	m = write(STDOUT_FILENO, buf, k);

	if (m == -1 || m != k)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return(m);
}
