#include "main.h"

/**
 * print_unsigned - prints int
 * @arg: argument to print
 * Return: no of char printed
 */

int print_unsigned(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int digit, exp = 1;
	int i = 0;
	/**last = n % 10 */

	while (num / exp >= 10)
	{
		exp *= 10;
	}

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num -= digit * exp;
		exp /= 10;
		i++;
	}

	return (i);
}
