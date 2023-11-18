#include "main.h"

/**
 * print_long_decimal - length modifier
 * print_long_unsigned - length modifier
 * print_short_decimal - length modifier
 * print_short_unsigned - length modifier
 * @arg: argument
 */

int print_long_decimal(va_list arg)
{
	long int num = va_arg(arg, long int);
	printf("%ld", num);
	return (0);
}

int print_long_unsigned(va_list arg)
{
	unsigned long int num = va_arg(arg, unsigned long int);
	printf("%lu", num);
	return (0);
}

int print_short_decimal(va_list arg)
{
	short int num = va_arg(arg, int);
	printf("%hd", num);
	return (0);
}

int print_short_unsigned(va_list arg)
{
	unsigned short int num = va_arg(arg, unsigned int);
	printf("%hu", num);
	return (0);
}
