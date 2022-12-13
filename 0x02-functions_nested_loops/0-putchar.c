#include <main.h>
/**
 * main - main block doc
 * Description: print _putchar with out using printf
 * Return: 0
 */
int main(void)
{
	char name[] = {"_putchar"};

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar("\n");
	return (0);
}
