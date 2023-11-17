#include "main.h"

/**
 * print_HEX_plus - converts to hex values
 * @num: integer
 * Return: hex value
 */

int print_HEX_plus(unsigned int num)
{
	int i, counter = 0;
	int *array;
	unsigned int tem = num;

	while (tem / 16 != 0)
	{
		tem = tem / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
	{
		return -1;
	}
	for (i = 0; i < counter; i++)
	{
		array[i] = num % 16;
		num = num / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] >= 10 && array[i] <= 15)
		{
			_putchar(array[i] - 10 + 'A');
		}
		else
		{
			_putchar(array[i] + '0');
		}
	}
	free(array);
	return (counter);
}
