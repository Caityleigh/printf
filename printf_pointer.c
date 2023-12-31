#include "main.h"

/**
 * printf_pointer - prints a hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */

int printf_pointer(va_list val)
{
	void *ptr;
	char *nil_str = "(nil)";
	long int address;
	int counter = 0;
	int i;

	ptr = va_arg(val, void*);

	if (ptr == NULL)
	{
		for (i = 0; nil_str[i] != '\0'; i++)
		{
			_putchar(nil_str[i]);
		}
		return (i);
	}

	address = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');

	counter = printHexUpperAux(address);

	return (counter + 2);

}
