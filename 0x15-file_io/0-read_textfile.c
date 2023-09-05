#include "main.h"

/**
 *read_textfile - Read and print the content of a text file.
 *
 * @filename: The name of the text file to read.
 * @letters: The maximum number of characters to read and print.
 *
 *Return: The actual number of characters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t chars_read, chars_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	chars_read = read(fd, buffer, letters);
	if (chars_read == -1)
		return (0);

	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_written == -1 || chars_written != chars_read)
		return (0);

	free(buffer);
	close(fd);

	return (chars_written);
}
