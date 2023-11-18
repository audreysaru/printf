#include "main.h"

/**
 * _printf - mimics printf
 * @format: identifier to look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char},
		{"%X", print_HEX},
		{"%i", print_int},
		{"%s", printf_string},
		{"%%", print_37},
		{"%d", print_desc},
		{"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct},
		{"%x", print_hex},
		{"%S", print_exec_string},
		{"%p", print_pointer},
		{"%r", print_rev},
		{"%R", print_rot13},
		{"%ld", print_long_decimal},
		{"%lu", print_long_unsigned},
		{"%hd", print_short_decimal},
		{"%hu", print_short_unsigned}
	};

	va_list arg;
	int i = 0, len = 0;
	int j;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = 0;
			while (j < 18)
			{
				if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
				{
					len = len + m[j].f(arg);
					i = i + 2;
					break;
				}
				j++;
			}
			if (j == 18)
			{
				_putchar(format[i]);
				len++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(arg);
	return (len);
}
