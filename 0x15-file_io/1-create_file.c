#include "main.h"

/**
  * create_file - Creates a file and write content in it
  * @filename: name of the file to be created
  * @text_content: text to be written in the file
  * Return: 1 if success, -1 if fails
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i, count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		write(fd, "", 1);
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i]; i++)
	{}
	count = write(fd, text_content, i);
	if (count < 0)
		return (-1);
	close(fd);
	return (1);
}
