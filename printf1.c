#include "main.h"
#include <stdio.h>

/**
 * _printf - prints all argument passed to it
 * @format: its the character string
 * Description: Prints all elements passes into it
 *
 * Return: returns the input to std output
 */
int _printf(const char *format, ...)
{
	va_list parameters;
	const char *p;
	int length;
	int count = 0;

	length = 0;
	va_start(parameters, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				_printchar('%');
				length++;
			}
			else if (*p == 'c' || *p == 's' || *p == 'd' || *p == 'i')
			{
				specifier_function func;

				func = all_functions(*p);
				length += func(parameters, length);
			}
			else
			{
				_printchar('%');
				_printchar(*p);
				length += 2;
			}
		}
		else if (*p == 'b')
		{
			count = get_bin(parameters);
			length += count;
		}
		else
		{
			_printchar(*p);
			length++;
		}
	}
	va_end(parameters);
	return (length);
}
