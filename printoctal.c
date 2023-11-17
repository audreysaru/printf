#include "main.h"

/**
 * print_oct - converts to octal values
 * @arg: argument
 * Return: octal value
 */

int print_oct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int *array, i;
	int counter = 0;

	array = malloc(sizeof(int) * 11);
	if (array == NULL)
	{
		return -1;
	}

	while (num > 0)
	{
		array[counter] = num % 8;
		num /= 8;
		counter++;
	}
	
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	
	free(array);
	return (counter);
}
