#include "main.h"

/**
 * append_text_to_file - create a file
 * @filename: pointer to the textfile
 * @text_content: string to write in the file
 *
 * Return: 1 for success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_return;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		if (len > 0)
		{
			write_return = write(fd, text_content, strlen(text_content));
			if (write_return == -1)
			{
				close(fd);
				return (-1);
			}
		}
	}

	close(fd);
	return (1);
}
