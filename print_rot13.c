#include "main.h"

/**
 * printrot - prints a ROT13_encoded string.
 * @args: arguments.
 * Return: counter.
 */

int printrot(va_list args)
{
	int i, j, counter = 0;
	int isFound = 0;
	char *inputString = va_arg(args, char*);
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}
	char rot13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (inputString == NULL)
		inputString = "(null)";

	for (i = 0; inputString[i]; i++)
	{
		isFound = 0;
		for (j = 0; alphabet[j] && !isFound; j++)
		{
			if (inputString[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				counter++;
				isFound = 1;
			}
		}
		if (!isFound)
		{
			_putchar(inputString[i]);
			counter++;
		}
	}

	return (counter);
}
