#include "function_pointers.h"

/**
 * print_name - print the name
 *
 * @name: pointer
 *
 * @f: pointer
 *
 * Return: no
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
