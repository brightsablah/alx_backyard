#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the textfile
 * @text_content: string to write in the file
 *
 * Return: created file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_return;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_return = write(fd, text_content, strlen(text_content));
		if (write_return == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
