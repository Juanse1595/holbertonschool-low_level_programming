#include "main.h"

/**
  * error_check - checks for errors
  * @status: the exit status
  * @file: name of file
  * @fd: file descriptor
  */

void error_check(int status, char *file, int fd)
{
	switch (status)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);

	}
}


/**
  * main - copies the content of a file to another
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int fd, fd2, rd_ret = 1, wr_ret, cl1, cl2;
	char *buffer[1024];

	if (argc != 3)
		error_check(97, NULL, 0);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		error_check(98, argv[1], 0);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
		error_check(99, argv[2], 0);
	while (rd_ret > 0)
	{
		rd_ret = read(fd, buffer, 1024);
		if (rd_ret < 0)
			error_check(98, argv[1], 0);
		wr_ret = write(fd2, buffer, rd_ret);
		if (wr_ret < 0)
			error_check(99, argv[2], 0);
	}
	cl1 = close(fd);
	cl2 = close(fd2);
	if (cl1 < 0)
		error_check(100, NULL, fd);
	if (cl2 < 0)
		error_check(100, NULL, fd2);
	return (0);

