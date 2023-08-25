#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * specifier_function - Pointer to function
 */
typedef int(*specifier_function)(va_list parameters, int);

/**
 * struct pfunc - new data type
 * @spec: format specifier
 * @fp: function pointer
 *
 * Description: creates a data type with two arguments
 */
typedef struct pfunc
{
	char spec;
	specifier_function fp;
} func_p;

int _printchar(char c);
int _putschar(char *str);
int _printf(const char *format, ...);
int print_int(va_list parameters, int length);
int print_str(va_list parameters, int length);
specifier_function all_functions(char specifier);
int print_digit(va_list parameters, int length);
int count_num(int digit);
void print_num(int m);

#endif
