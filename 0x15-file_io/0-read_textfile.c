#include "main.h"

/**
 * read_textfile - read the text file
 *
 * @filename: pointer
 * @letters: sizet
 *
 * Return: sizet
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y;
	char b[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	y = read(x, &b[0], letters);
	y = write(STDOUT_FILENO, &b[0], y);
	close(x);
	return (y);
}
