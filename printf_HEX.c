#include "main.h"

/**
 * printHexadecimal - print a hexadecimal number.
 * @value: arguments.
 * Return: counter.
 */
int printHexadecimal(va_list value)
{
	int i;
	int *digits;
	int counter = 0;
	unsigned int number = va_arg(value, unsigned int);
	unsigned int temp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	digits = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		digits[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (digits[i] > 9)
			digits[i] = digits[i] + 39;
		_putchar(digits[i] + '0');
	}
	free(digits);
	return (counter);
}
