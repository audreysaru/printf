#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - Structure to store format specifiers and functions
 * @id: Format specifier string (e.g., "%c", "%s", "%d", ...)
 * @f: Pointer to the function that handles the format specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list arg);
int printf_string(va_list arg);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_number(int n);
int print_desc(va_list arg);
int print_int(va_list arg);
int print_bin(va_list arg);
int print_unsigned(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_exec_string(va_list arg);
int print_HEX_plus(unsigned int num);
int print_pointer(va_list arg);
int print_hex_plus(unsigned long int num);
int print_rev(va_list arg);
int print_rot13(va_list arg);
int print_long_decimal(va_list arg);
int print_long_unsigned(va_list arg);
int print_short_decimal(va_list arg);
int print_short_unsigned(va_list arg);
int print_int_with_precision(va_list arg);
int print_int_with_field_width(va_list arg);
int print_int_with_zero_flag(va_list arg);
int print_int_left_justified(va_list arg);
int print_int_with_precision(va_list arg);
int print_int_with_field_width(va_list arg);
int print_unsigned_with_precision(va_list arg);
int print_unsigned_with_field_width(va_list arg);
int print_unsigned_with_zero_flag(va_list arg);
int print_unsigned_left_justified(va_list arg);
int print_octal_with_precision(va_list arg);
int print_octal_with_field_width(va_list arg);
int print_hex_with_precision(va_list arg);
int print_hex_with_field_width(va_list arg);
int print_hex_with_zero_flag(va_list arg);
int print_hex_left_justified(va_list arg);
#endif
