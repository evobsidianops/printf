#include "main.h"

/**
 * all_functions - all prints function
 * @specifier: specifier format to be printed
 *
 * Description: contains all format specifier to be printed
 * Return: returns the appropriate sormat specifier
 */
specifier_function all_functions(char specifier)
{
	int j;

	func_p array[] = {
		{'c', print_int},
		{'s', print_str},
		{'d', print_digit},
		{'i', print_digit},
		{0, NULL},
	};

	for (j = 0; array[j].spec != 0; j++)
	{
		if (specifier == array[j].spec)
		{
			return (array[j].fp);
		}
	}
	return (NULL);
}
