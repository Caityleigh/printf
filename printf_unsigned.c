#include "main.h"

/**
 * print_unsigned - prints an unsigned integer.
 * @args: arguments to print.
 * Return: number of characters printed.
 */

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int value, last = num % 10, digit, exp = 1;
	int counter = 1;

	num = num / 10;
	value = num;

	if (last < 0)
	{
		_putchar('-');
		value = -value;
		num = -num;
		last = -last;
		counter++;
	}

	if (value > 0)
	{
		while (value / 10 != 0)
		{
			exp = exp * 10;
			value = value / 10;
		}

		value = num;
		while (exp > 0)
		{
			digit = value / exp;
			_putchar(digit + '0');
			value = value - (digit * exp);
			exp = exp / 10;
			counter++;
		}
	}

	_putchar(last + '0');

	return (counter);
}
