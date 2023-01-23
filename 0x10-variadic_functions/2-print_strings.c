#include "variadic_functions.h"

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list lst;
	char *ctch;

	va_start(lst, n);
	for (num = 0; num < n; num++)
	{
		ctch = va_arg(lst, char*);
		if (ctch == NULL)
			printf("(nil)");
		else
			printf("%s", ctch);
		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(lst);
}
