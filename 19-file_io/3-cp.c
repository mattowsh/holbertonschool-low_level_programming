#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc : quantity of arguments
 * @argv : argument variable
 *
 * Return: 0 always success, an int otherwise
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to, *buffer;
	ssize_t fdfrom, fdto, outw, closefrom, closeto;
	int recorre = 1024; /* moves through the file_from */

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		return (-1);

	fdfrom = open(file_from, O_RDONLY, 0600);
	fdto = open(file_to, O_CREAT | O_TRUNC | O_APPEND | O_WRONLY, 0664);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	while (recorre == 1024)
	{
		recorre = read(fdfrom, buffer, 1024);
		if (recorre == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit (98);
		}
		outw = write(fdto, buffer, recorre);
		if (outw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
		
	closefrom = close(fdfrom);
	if (closefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", closefrom);
		exit (100);
	}
	
	closeto = close(fdto);
	if (closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", closeto);
		exit (100);
	}

	return (0);
}
