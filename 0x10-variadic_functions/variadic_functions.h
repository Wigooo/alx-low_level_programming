#ifndef VARIDIC_H
#define VARIDIC_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/***/
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
