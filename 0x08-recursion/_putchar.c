#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 *
 * @c: char
 *
 * Return: 1 on succes, -1 on error, error is set appropriatly
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
