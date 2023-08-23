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
	int j, length;
	char *str;
	
	length = 0;
	va_start(parameters, format);
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
			else if (*p == 'c')
			{
				j = va_arg(parameters, int);
				_printchar(j);
				length++;
			}
			else if (*p == 's')
			{
				str = va_arg(parameters, char*);
				_putschar(str);
				length++;
			}
		}
		else
		{
			_printchar(*p);
			length++;
		}
		/* format++;*/
	}
	va_end(parameters);
	return (length);
}
