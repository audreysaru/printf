#include "main.h"

/**
 * print_rot13 - convert to rot13
 * @arg: argument
 * Return: counter
 */

int print_rot13(va_list arg)
{
	int i, j, counter = 0;
	int k;
	char *s = va_arg(arg, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; a[j] != '\0' && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
