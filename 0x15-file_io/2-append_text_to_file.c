#include "main.h"

/**
 * _strlen - finds the len of a str
 * @str: pointer to the str
 *
 * Return: len of the str
 */
size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}

/**
 * append_text_to_file - appends a txt char at the end of  file.
 * @filename: Name of that file
 * @text_content: NULL terminated str to add to the end of the file
 *
 * Return: 1 on (success) and -1 on (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (length == -1)
		return (-1);
	return (1);
}
