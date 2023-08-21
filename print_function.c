#include "main.h"

/**
 * _printchar - prints chararcters
 * @c: character parameter
 *
 * Return: returns printed value
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putschar - prints character
 * @str: pointer to string
 *
 * Return: returns chars
 */
int _putschar(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_printchar(str[i]);
	}
	return (i);
}
