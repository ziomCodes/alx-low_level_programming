#include "main.h"
/**
 * _islower - function name
 * Description: Return 1 if letter is lowercase, 0 if not.
 *@c: character to be checked
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
