#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * @c: check the input of the function
 *
 * Return: return 1 if 'c' is lowercase
 *         or always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
