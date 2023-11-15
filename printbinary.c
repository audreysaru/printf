#include "main.h"

/**
 * print_bin - print binary
 * @arg: argument
 * Return: binary
 */

int print_bin(va_list arg)
{
	int flap = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va arg(arg, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (a >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');

	}
	return (cont);
}
