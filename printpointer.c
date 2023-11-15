#include "main.h"

/**
 * print_pointer - prints an address
 * @arg: argument
 * Return: address
 */

int print_pointer(va_list arg)
{
	void *p;
	char *s = "(null)";
	long int a;
	int i, b;

	p = va_arg(arg, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_plus(a);
	return (b + 2);
}
