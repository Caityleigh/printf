#include "main.h"

/**
 * printHexAux - prints a hexadecimal number.
 * @num: the number to be printed.
 * Return: the count of digits printed
 */
int printHexAux(unsigned long int num)
{
	long int i;
	long int *digits;
	long int counter = 0;
	unsigned long int temp = num;

	/*calculate the number of digit in the hexadecimal representation*/
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

/* allocate memory for storing the digits */
digits = malloc(counter * sizeof(long int));

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

free(digits); /* free the allocated memory */

return (counter); /* return the count of digits printed */
}
