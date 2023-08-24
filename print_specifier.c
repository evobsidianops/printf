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
 * @parameters: the parameters for the arguments
 * @length: this is the length
 * Return: Return value
 */
int get_int(va_list parameters, int length)
{
	int num = va_arg(parameters, int);
	int val = 0;

	if (num == 0)
	{
		return (0);
	}
	else
	{
		val = 1 + get_int(parameters, length);
		_printchar(num % 10 + '0');
		return (val);
	}
}
