#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#define BUFF_SIZE 1024

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function.
 *
 * @format: Pointer to a format.
 *
 * Return: The printed chars according to conversion specifier.
 */

int _printf(const char *format, ...)
{
	int i;
	int printed = 0, printed_chars = 0;
	int buff_ind = 0;

	va_list list;

	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);

			switch (format[++i])
			{
				case 'c':
				putchar(va_arg(list, int));
				printed_chars++;
				break;

				case 's':
				printed = printf("%s", va_arg(list, char *));
				if (printed >= 0)
					printed_chars += printed;
				break;

				case '%':
				putchar('%');
				printed_chars++;
				break;

				default:
				break;
			}
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);

	return (printed_chars);
}


/**
 * print_buffer - Prints the contents of buffer, if characters
 * are stored in it.
 *
 * @buffer: An array of characters to be printed.
 * @buff_ind: Pointer to an int representing current index.
 *
 * Return: Void.
 */

void print_buffer(char buffer[], int *buff_ind)
{
	int i;

	if (*buff_ind > 0)
	{
		for (i = 0; i < *buff_ind; i++)
			putchar(buffer[i])
	}

	*buff_ind = 0;
}
