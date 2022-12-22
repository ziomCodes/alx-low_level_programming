#include "main.h"

/**
 * cap_string - capitalize words
 * @str: string to capitalize
 * Return: 'str'
 */

char *cap_string(char *str)
{
	int num, num1;
	int _checker;
	char _symbol[] = ",;.!?(){}\n\t\" ";

	for (num = 0, _checker = 0; str[num] != '\0'; num++)
	{
		if (str[0] > 96 && str[0] < 123)
			_checker = 1;
		for (num1 = 0; _symbol[num1] != '\0'; num1++)
		{
			if (_symbol[num1] == str[num])
				_checker = 1;
		}

		if (_checker)
		{
			if (str[num] > 96 && str[num] < 123)
			{
				str[num] -= 32;
				_checker = 0;
			}
			else if (str[num] > 64 && str[num] < 91)
				_checker = 0;
			else if (str[num] > 47 && str[num] < 58)
				_checker = 0;
		}
	}
	return (str);
}
