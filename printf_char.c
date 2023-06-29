#include "main.h"

/**
 * printChar - prints a character.
 * @value: arguments.
 * Return: 1.
 */
int printChar(va_list value)
{
	char ch;

	char = va_arg(value, int);
	_putchar(ch);
	return (1);
}
