#include "main.h"

/**
 * printOctal - prints an octal number.
 * @args: arguments.
 * Return: counter.
 */

int printOctal(va_list args)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	for (num = temp; num / 8 != 0; num /= 8)
		counter++;

	counter++;

	arr = malloc(counter * sizeof(int));

	for (i = 0, num = temp; i < counter; i++, num /= 8)
		arr[i] = num % 8;

	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}

	free(arr);

	return (counter);
}
