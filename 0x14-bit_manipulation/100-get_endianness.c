#include <main.h>

/**
 *get_endianness - A function that finds the endianess of your machine
 *
 *Return: The char pointer to an address
 */

int get_endianness(void)
{
	unsigned int num;
	char *p;

	num = 1;
	p = (char *) &num;
	return (*p);
}
