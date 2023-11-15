#include "main.h"

/**
 * print_exec_string - exclusive string
 * @arg: argument
 * Return: string
 */

int print_exec_string(va_list arg)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 12 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('*');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_plus(value);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
