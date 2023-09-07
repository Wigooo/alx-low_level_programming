#include <unistd.h>

/**
 * _putchar - write char c to stdout
 * @c: char
 *
 *Return: 1 on success
 *On error, -1 returned, error is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
