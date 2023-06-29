#include "main.h"

/**
 * printHexUpperAux - prints a hexadecimal number.
 * @num: number to print.
 * Return: counter.
 */
int printHexUpperAux(unsigned long int num)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int temp = num;

	/* calculate the number of digit in the gexdecimal representation */
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
/* allocate memory for storing the digits */
	arr = malloc(counter * sizeof(int));

	/* extract the digit of the hexadecimal number */
	for (i = 0; i < counter; i++;)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}

	/* print the digits in reverse order */
	for (i = counter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}

	free(arr); /*free the allocated memory */
	return (counter); /* return the count of digits printed*/
}
