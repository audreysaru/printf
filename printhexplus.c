#include "main.h"

/**
 * print_hex_plus - converts to hex values
 * @num: integer
 * Return: hex value
 */

int print_hex_plus(unsigned long int num)
{
	int i, counter = 0;
	int *array;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
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
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
