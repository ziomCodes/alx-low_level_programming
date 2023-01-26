#include <stdio.h>

void __attribute__((constructor)) turtle(void);

/**
 * turtle - Prints a string before the
 *   main function is executed.
 */
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
