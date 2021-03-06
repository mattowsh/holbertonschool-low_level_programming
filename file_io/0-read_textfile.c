#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename : file to read
 * @letters : the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd; /* file descriptor */
	ssize_t outw, outr;
	char *buffer;

	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (-1);

	/* read and write */
	fd = open(filename, O_RDWR, 0600);

	if (fd == -1) /* bc open was failed */
		return (0);
	outr = read(fd, buffer, letters);

	outw = write(STDOUT_FILENO, buffer, outr);

	close(fd);

	return (outw);
}
