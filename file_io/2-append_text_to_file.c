#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename : the name of the file to create
 * @text_content : string to be added
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	return (1);
}
