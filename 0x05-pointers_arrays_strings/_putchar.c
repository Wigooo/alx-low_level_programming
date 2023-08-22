#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c: the char to print
 *
 * Return: on success 1.
 * on erroe, -1 is returned, and error is set approximatly
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
