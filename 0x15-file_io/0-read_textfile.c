#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file then print it to POSIX stdout.
 * @filename: A pointer to the filename.
 * @letters: The number of letters the function should print
 *
 * Return: If the function fail or null - 0.
 *         o/w - the actual number of bytes the func can print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
