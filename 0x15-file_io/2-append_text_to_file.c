#include "main.h"

/**
 * _strlen - length
 *
 * @s: pointer
 *
 * Return: int
*/

int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;
	return (x);
}

/**
 * append_text_to_file - append text to file
 *
 * @filename: filename
 * @text_content: texxt content
 *
 * Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);
	if (l)
		b = write(x, text_content, l);
	close(x);
	return (b == l ? 1 : -1);
}
