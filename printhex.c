#include "main.h"

/**
 * print_hex - converts to hex values
 * @arg: argument
 * Return: hex value
 */

int print_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int counter = 0;
	int i;

	char hex_digits[] = "0123456789abcdef";

	char result[20];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num != 0)
	{
		int remainder = num % 16;
		result[counter++] = hex_digits[remainder];
		num = num / 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(result[i]);
	}
	return (counter);
}
