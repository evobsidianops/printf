#include "main.h"
/**
 * get_int - function to print integers
 * @args: list printed
 * Return: Return count
 */
int get_int(va_list args)
{
	int a, expo = 1, len = 0;
	unsigned int n;

	a = va_arg(args, int);

	if (a < 0)
	{
		len = len + _printchar('-');
		n = a * -1;
	}
	else
		n = a;
	while (n / expo > 9)
		expo *= 10;
	while (expo != 0)
	{
		len = len + _printchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}
