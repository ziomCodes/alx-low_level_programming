#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: 0 if equals, positive int if s1 > s2 and negative int if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int num;

	for (num = 0; s1[num] != '\0' || s2[num] != '\0'; num++)
	{
		if (s1[num] != s2[num])
		{
		return (s1[num] - s2[num]);
		}
	}
	return (0);
}
