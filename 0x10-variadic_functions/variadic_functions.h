#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const style, ...);
void _printchar(va_list lst);
void _printstr(va_list lst);
void _printfloat(va_list lst);
void _printint(va_list lst);

/**
 * struct prchk - struct file
 * @type: pointer type
 * @f: function f
 *
 * Description: struct file classes
 */
typedef struct prchk
{
	char *type;
	void (*f)();
} prchk;

#endif
