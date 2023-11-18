#include "main.h"

/**
 * print_int_with_precision - integer values
 * print_int_with_field_width - integer values
 * print_int_with_zero_flag - integer values
 * print_int_left_justified - integer values
 * print_int_with_field_width - integer values
 * print_unsigned_with_precision - unsigned integer values
 * print_unsigned_with_field_width - unsigned integer values
 * print_unsigned_with_zero_flag - unsigned integer values
 * print_unsigned_left_justified - unsigned integer values
 * print_octal_with_precision - octal values
 * print_octal_with_field_width - octal values
 * print_hex_with_precision - hexadecimal values
 * print_hex_with_field_width - hexadecimal values
 * print_hex_with_zero_flag - hexadecimal values
 * print_hex_left_justified - hexadecimal values
 */

int print_int_with_precision(va_list arg)
{
	int num = va_arg(arg, int);
	int precision = va_arg(arg, int);
	printf("%.*d", precision, num);
	return (0);
}

int print_int_with_field_width(va_list arg)
{
	int num = va_arg(arg, int);
	int width = va_arg(arg, int);
	printf("%*d", width, num);
	return (0);
}

int print_int_with_zero_flag(va_list arg)
{
	int num = va_arg(arg, int);
	int width = va_arg(arg, int);
	printf("%0*d", width, num);
	return (0);
}

int print_int_left_justified(va_list arg)
{
	int num = va_arg(arg, int);
	int width = va_arg(arg, int);
	printf("%-*d", width, num);
	return (0);
}

int print_unsigned_with_precision(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int precision = va_arg(arg, int);
	printf("%.*u", precision, num);
	return (0);
}

int print_unsigned_with_field_width(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%*u", width, num);
	return (0);
}

int print_unsigned_with_zero_flag(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%0*u", width, num);
	return (0);
}

int print_unsigned_left_justified(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%-*u", width, num);
	return (0);
}

int print_octal_with_precision(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int precision = va_arg(arg, int);
	printf("%.*o", precision, num);
	return (0);
}

int print_octal_with_field_width(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%*o", width, num);
	return (0);
}

int print_hex_with_precision(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int precision = va_arg(arg, int);
	printf("%.*x", precision, num);
	return (0);
}

int print_hex_with_field_width(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%*x", width, num);
	return (0);
}

int print_hex_with_zero_flag(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%0*x", width, num);
	return (0);
}

int print_hex_left_justified(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int width = va_arg(arg, int);
	printf("%-*x", width, num);
	return (0);
}
