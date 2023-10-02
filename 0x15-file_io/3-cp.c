#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define NOWRITE "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define NOCLOSE "Error: Can't close fd FD_VALUE %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry point
 *
 * @ac: int
 * @av: pointer
 *
 * Return: int
*/

int main(int ac, char **av)
{
	int fd_1 = 0, fd_2 = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);
	fd_2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_2 == -1)
		dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);

	while ((b = read(fd_1, buf, READ_BUF_SIZE)) > 0)
		if (write(fd_2, buf, b) != b)
			dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);

	fd_1 = close(fd_1);
	fd_2 = close(fd_2);
	if (fd_1)
		dprintf(STDERR_FILENO, NOCLOSE, fd_1), exit(100);
	if (fd_2)
		dprintf(STDERR_FILENO, NOCLOSE, fd_1), exit(100);

	return (EXIT_SUCCESS);
}
