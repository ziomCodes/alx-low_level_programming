#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	va_list lst;
	int tot;

	va_start(lst, n);
	for (num = 0, tot = 0; num < n; num++)
	{
		tot += va_arg(lst, int);
	}

	va_end(lst);

	return (tot);
}
