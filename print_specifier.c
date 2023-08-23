#include "main.h"

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

	j = va_arg(parameters, int);
	length += _printchar(j);
	return (length);
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

	str = va_arg(parameters, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	length += _putschar(str);

	return (length);
}
