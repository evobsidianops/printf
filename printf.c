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
	const char *i;
	int j;
	char *str;

	va_start(parameters, format);
	for (i = format; *i; i++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_printchar('%');
			}
			else if (*format == 'c')
			{
				j = va_arg(parameters, int);
				_printchar(j);
			}
			else if (*format == 's')
			{
				str = va_arg(parameters, char*);
				_putschar(str);
			}
		}
		else
		{
			_printchar(*format);
		}
		format++;
	}
	va_end(parameters);
	return (0);
}
