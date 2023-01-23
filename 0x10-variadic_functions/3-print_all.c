#include "variadic_functions.h"

/**
 * _printchar - print char type element from va_list
 * @lst: va_list passed to function
 */
void _printchar(va_list lst)
{
	printf("%c", va_arg(lst, int));
}

/**
 * _printstr - print string element from va_list
 * @lst: va_list passed to function
 */
void _printstr(va_list lst)
{
	char *p;

	p = va_arg(lst, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
}

/**
 * _printfloat - print float type element from va_list
 * @lst: va_list passed to function
 */
void _printfloat(va_list lst)
{
	printf("%f", va_arg(lst, double));
}

/**
 * _printint - print int type element from va_list
 * @lst: va_list passed to function
 */
void _printint(va_list lst)
{
	printf("%d", va_arg(lst, int));
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @style: string of formats to use and print
 */
void print_all(const char * const style, ...)
{
	unsigned int num, num1;
	va_list opt;
	char *sprt;

	prchk dt[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	num = 0;
	sprt = "";
	va_start(opt, style);
	while (style != NULL && style[num / 4] != '\0')
	{
		num1 = num % 4;
		if (dt[num1].type[0] == style[num / 4])
		{
			printf("%s", sprt);
			dt[num1].f(opt);
			sprt = ", ";
		}
		num++;
	}
	printf("\n");
	va_end(opt);
}
