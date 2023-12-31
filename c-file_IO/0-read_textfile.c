#include "main.h"

/**
 * read_textfile - read a textfile and print it to standard output
 * @filename: pointer to the textfile
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, sizeof(char) * (letters + 1));
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[read_bytes] = '\0';

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (read_bytes != written_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (read_bytes);
}
