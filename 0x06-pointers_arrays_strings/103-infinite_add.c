#include "main.h"

/**
* infinite_add - a function that adds two numbers
* @n1: a char pointer given by main that represents a num
* @n2: a char pointer given by main that represents a num
* @r: a buffer given by main
* @size_r: the buffer size given by main
*
* Description: a function that adds numbers that are passed
*	as a strings and we add them up
* Return: the result to char *r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num = 0, num1 = 0, num2 = 0;
	int _add = 0;
	int _ten = 0;
	int _start = 0;
	int _change = 0;

	while (n1[num] != 0)
		num++;
	while (n2[num1] != 0)
		num1++;
	num--;
	num1--;
	if (num > size_r || num1 > size_r)
		return (0);
	for ( ; num2 < size_r; num--, num1--, num2++)
	{
		_add = _ten;
		if (num >= 0)
			_add += n1[num] - '0';
		if (num1 >= 0)
			_add += n2[num1] - '0';
		if (num < 0 && num1 < 0 && _add == 0)
			break;
		_ten = _add / 10;
		r[num2] = _add % 10 + '0';
	}
	if (num >= 0 || num1 >= 0 || _add > 0)
		return (0);
	r[num2] = '\0';
	num2--;
	for ( ; _start < num2; num2--, _start++)
	{
		_change = r[num2];
		r[num2] = r[_start];
		r[_start] = _change;
	}
	return (r);
}
