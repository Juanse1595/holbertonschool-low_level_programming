#include "main.h"

/**
  * read_textfile - reads a file and write its content in
  * the standard output
  * @filename: name of the file to be read
  * @letters: number of bytes to be written
  * Return: Number of bytes written
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, count = 0, count2 = 0;
	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	count = read(fd, buffer, letters);
	if (count < 0)
		return (0);
	count2 = write(STDOUT_FILENO, buffer, count);
	if (count2 < 0 || count != count2)
		return (0);
	free(buffer);
	close(fd);
	return (count2);
}
