#include "main.h"

/**
 * _isalpha - check if char is a letter
 *            both lowercase or uppercase
 *
 * @c: takes the input from another function
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}