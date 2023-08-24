#include "main.h"
#include <stdio.h>

/**
 * print_int - prints int
 * @parameters: va_list param
 * @length: length of return value
 *
 * Return: return 0
 */
int print_int(va_list parameters, int length)
{
	int j;

	length = 0;
	j = va_arg(parameters, int);
	 _printchar(j);
	return (++length);
}

/**
 * print_str - prints strings
 * @parameters: va_list param
 * @length: length of return value
 *
 * Return: returns 0
 */
int print_str(va_list parameters, int length)
{
	char *str;

	length = 0;
	str = va_arg(parameters, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	length += _putschar(str);
	return (length);
}
/**
 * get_int - Function that print int
 * @num: the paramiter
 * Return: Return value
 */
int get_int(int num)
{
	int n, val = 0;

	if (num == 0)
	{
		return (0);
	}
	else
	{
		n = num / 10;
		val++;
		get_int(n);
		_printchar(num % 10 + '10');
		return (val);
	}
}
