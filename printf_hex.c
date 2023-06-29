#include "main.h"

/**
 * printHexUpperModified - prints a hexadecimal number in uppercase.
 * @value: arguments.
 * Return: counter.
 */
int printHexUpperModified(va_list value)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(value, unsigned int);
	unsigned int temp = num;

	/* calculate the number of digits in the hexadecimal representation */
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	/*allocate memory for storing the digits */
	array = malloc(counter * sizeof(int));

	/* extract the digits of the hexadecimal number */
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7; /*adjust the character A-F */
		_putchar(array[i] + '0'); /* print digit */
	}
	free(array); /* free the allocated memory*/

	return (counter);
}
