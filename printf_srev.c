#include "main.h"

/**
 * print_string_reverse - prints a string in reverse.
 * @args: arguments.
 * Return: Number of characters printed.
 */

int print_string_reverse(va_list args)
{
	char *str = va_arg(args, char*);
	int i;
	int length = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (length);
}
