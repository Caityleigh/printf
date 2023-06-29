#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @fmt: identifier to look for.
 * Return: the lenght of the string.
 */
int _printf(const char * const fmt, ...)
{
	/*array of coversion mappings*/
	convert_match mappings[] = {
	{"%s", printf_string}, {"%c", printChar},
	{"%%", printPercent},
	{"%i", printInteger}, {"%d", printDecimal}, {"%r", print_string_reverse},
	{"%R", printrot}, {"%b", _printBinary}, {"%u", print_unsigned},
	{"%o", printOctal}, {"%x", printHexUpperModified}, {"%X", printHexadecimal},
	{"%S", printExclusiveString}, {"%p", printf_pointer}
};

va_list args;
int i = 0, j, length = 0;

va_start(args, fmt);

/*check if format string is empty or only contains a single '%'*/
if (fmt == NULL || (fmt[0] == '%' && fmt[1] == '\0'))
return (-1);
Here:
/* iterate through the conversion mapping */
while (fmt[i] != '\0')
{
	j = 13;
	while (j >= 0)
	{
	/*check if the mapping matches the format */
	if (mappings[j].id[0] == fmt[i] && mappings[j].id[1] == fmt[i + 1])
	{
		length += mappings[j].f(args);
		i = i + 2;
		goto Here;
	}
	j--;
	}
	_putchar(fmt[i]);
	lenght++;
	i++;
}
va_end(args);
return (length);
}
