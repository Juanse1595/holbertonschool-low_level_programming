#include "main.h"

/**
  * append_text_to_file - Appends text to a file
  * @filename: name of the file
  * @text_content: pointer to pointer to the text
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	/* Variables */
	int fd, count, i;

	if (filename == NULL)
		return (-1);
	/* Open file in append mode */
	fd = open(filename, O_RDWR | O_APPEND, 0664);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	/* length of the string */
	for (i = 0; text_content[i]; i++)
	{}
	/* write text */
	count = write(fd, text_content, i);
	if (count < 0)
		return (-1);
	close(fd);
	return (1);
}
