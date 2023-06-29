#include "main.h"

/**
 * printExclusiveString - prints exclusive string.
 * @val: arguments.
 * Return: the length of the string.
 */
int printExclusiveString(va_list val)
{
	char *str;
	int i, length = 0;
	int cast;

	str = va_arg(val, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\'); /* print backslash */
			_putchar('x'); /* print 'x' */
			length += 2;
			cast = str[i];

			if (cast < 16)
			{
				_putchar('0');
				length++;
			}

			length += printHexUpperAux(cast);
		}
		else
		{
			_putchar(str[i]); /*prints the character*/
			length++;
		}
	}

	return (length); /* return the length of the string */
}
