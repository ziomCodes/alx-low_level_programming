#include "variadic_functions.h"

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list lst;

	va_start(lst, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(lst, int));
		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(lst);
}
