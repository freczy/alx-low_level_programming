#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * code97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void code97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * code98 - checks if file_from exists and can be read
 * @check: checks if its true of false
 * @file: file_from name
 * @fd_from: file descriptor of fl_from, or -1
 * @fd_to: file descriptor of fl_to, or -1
 *
 * Return: void
 */
void code98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * code99 - checks that fl_to was created and|or can be written to
 * @check: checks if True or False
 * @file: file_to name
 * @file_from: file descriptor of file_from, or -1
 * @file_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void code99(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
}

/**
 * code100 - checks if file descriptors were closed properly
 * @check: checks if true|false
 * @fd: file descriptor
 *
 * Return: void
 */
void code100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main -  copy the content of a file to another file.
 * @argc: num of argumnts passed
 * @argv: Array of pointers to the argumnts
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	code97(argc);
	file_from = open(argv[1], O_RDONLY);
	code98((ssize_t)file_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	code99((ssize_t)file_to, argv[2], file_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(file_from, buffer, 1024);
		code98(lenr, argv[1], file_from, file_to);
		lenw = write(file_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		code99(lenw, argv[2], file_from, file_to);
	}
	close_to = close(file_to);
	close_from = close(file_from);
	code100(close_to, file_to);
	code100(close_from, file_from);
	return (0);
}
