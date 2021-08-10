#include "main.h"

/**
  * main - copies the content of a file to another
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int fd, fd2, rd_ret, wr_ret, cl1, cl2;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDWR);
	rd_ret = read(fd, buffer, 1024);
	if (fd < 0 || rd_ret < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	wr_ret = write(fd2, buffer, rd_ret);
	if (fd2 < 0 || wr_ret < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl1 = close(fd);
	cl2 = close(fd2);
	if (cl1 < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd);
		exit(100);
	}
	if (cl2 < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
