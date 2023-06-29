#include "main.h"

/**
 * printf_string - print a string.
 * @args: Argument.
 * Return: The length of the string.
 */

int printf_string(va_list args)
{
	char *strlenc;
	int i, length;

	strlenc = va_arg(args, char *);

	if (strlenc == NULL)
	{
		strlenc = "(null)";
		length = string_length(strlenc);


		for (i = 0; i < length; i++)
		{
			_putchar(strlenc[i]);
		}

		return (length);
	}
	else
	{
		length = string_length(strlenc);

		for (i = 0; i < length; i++)
		{
			_putchar(strlenc[i]);
		}

		return (length);
	}
}
