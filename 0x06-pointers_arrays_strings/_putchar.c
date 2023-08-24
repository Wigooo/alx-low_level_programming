#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 *
 * @c: the char to print
 *
 * Return: 1 on success
 *         -1 on error and error is set appropriatly
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
