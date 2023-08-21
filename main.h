#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printchar(char c);
int _putschar(char *str);
int _printf(const char *format, ...);

#endif
