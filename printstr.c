#include "main.h"

/**
 * _strlen - returns the  length of a string
 * @str: string pointer
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlen - strlen function but for constant char printing str
 * @str: string
 * Return: i
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}