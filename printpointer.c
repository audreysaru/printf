#include "main.h"

/**
 * print_pointer - prints an address
 * @arg: argument
 * Return: address
 */

int print_pointer(va_list arg)
{
	void *p;
	const char *s = "(null)";
	int i = 0, b;
	unsigned long int a;

	p = va_arg(arg, void *);
	if (p == NULL)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_plus(a);
	return (b + 2);
}
