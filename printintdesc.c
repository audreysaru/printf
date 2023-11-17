#include "main.h"
/**
 * print_int - prints int
 * print_desc - prints decimal
 * print_number - printsnumber
 * @arg: argument to print
 * @n: value
 * Return: no of char printed
 */
int print_number(int n)
{
	int num = n;
	int digit, exp = 1;
	int printed = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		printed++;
	}

	while (num / exp >= 10)
	{
		exp *= 10;
	}

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		printed++;
		num -= digit * exp;
		exp /= 10;
	}

	return (printed);
}

int print_int(va_list arg)
{
        return (print_number(va_arg(arg, int)));
}

int print_desc(va_list arg)
{
        return (print_number(va_arg(arg, int)));
}
