#include "main.h"

/**
 * printf_string -prints a strig
 * @arg: arguments
 * Return: the length of the string
 */

int printf_string(va_list arg)
{
	char *str;
	int i;
	int length;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
	}
	return (length);
}
