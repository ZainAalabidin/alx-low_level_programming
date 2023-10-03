#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file print to STDOUT.
 * @filename : text file being read
 * @letters : number of letters to be read
 * Return: w - actual of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t y;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(fd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(fd);
	return (x);
}
