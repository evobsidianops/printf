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
 * count_num - Counts the number of digits
 * @digit: value to be counted
 *
 * Return: returns value to be counted#
 */
int count_num(int digit)
{
	int d;
	
	d = 0;
	if (digit < 0)
		d++;
	if (digit == 0)
		d++;
	while (digit != 0)
	{
		digit /= 10;
		d++;
	}
	return (d);
}

/**
 * print_digit - Prints the integer value
 * @parameters: parameters to be printed
 * @length: return of argument
 *
 * Return: returns length of element
 */
int print_digit(va_list parameters, int length)
{
	int m;

	m = va_arg(parameters, int);
	length = count_num(m);
	print_num(m);
	return (length);
}

/**
 * print_num - prints the number fo argument
 * @m: value to be printed
 */
void print_num(int m)
{
	unsigned int n;
	
	if (m < 0)
	{
		_printchar('-');
		n = -m;
	}
	else
	{
		n = m;
	}
	if (n / 10)
		print_num(n / 10);
	_printchar((n % 10) + '0');
}
