#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @arg: argument
 * Return: reversed string
 */

int print_rev(va_list arg)
{
	char *s = va_arg(arg, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
