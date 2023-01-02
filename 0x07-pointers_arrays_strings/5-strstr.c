#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int num;
	int num1;
	int num2;

	num = 0;
	num2 = 0;
	while (haystack[num] != '\0')
	{
		num1 = 0;
		while (needle[num1 + num2] != '\0' && haystack[num + num2] != '\0'
		       && needle[num1 + num2] == haystack[num + num2])
		{
			if (haystack[num + num2] != needle[num1 + num2])
				break;
			num2++;
		}
		if (needle[num1 + num2] == '\0')
			return (&haystack[num]);
		num1++;
		num++;
	}

	return (NULL);
}
