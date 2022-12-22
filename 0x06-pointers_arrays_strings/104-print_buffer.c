#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int bb;
	int num;

	for (bb = 0; bb < size; bb += 10)
	{
		printf("%08x: ", bb);

		for (num = 0; num < 10; num++)
		{
			if ((num + bb) >= size)
				printf("  ");
			else
				printf("%02x", *(b + num + bb));
			if ((num % 2) != 0 && num != 0)
				printf(" ");
		}
		for (num = 0; num < 10; num++)
		{
			if ((num + bb) >= size)
				break;
			else if (*(b + num + bb) >= 31 &&
				 *(b + num + bb) <= 126)
				printf("%c", *(b + num + bb));
			else
				printf(".");
		}
		if (bb >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
