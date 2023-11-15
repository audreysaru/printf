#include "main.h"

/**
 * printf_char - prints a char
 * @arg: arguments
 * Return: 1
 */

int printf_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	_putchar(str);
	return (0);
}
