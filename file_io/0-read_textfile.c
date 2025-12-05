#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * Description: Opens a text file, reads up to @letters characters,
 *              and writes them to the POSIX standard output.
 *              If the file cannot be opened or read, returns 0.
 *              If filename is NULL, returns 0.
 *              If write fails or doesn't write the expected number of bytes,
 *              returns 0.
 *
 * Return: The number of letters actually read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buffer, letters);
	if (r_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);
	close(fd);

	if (w_bytes != r_bytes)
		return (0);

	return (w_bytes);
}
