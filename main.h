#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * *f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int const_string_lenghth(const char *str);
int printHexAux(unsigned long int num);
int printBinary(va_list value);
int printChar(va_list value);
int printHexadecimal(va_list value);
int printHexUpperModified(va_list value);
int printHexUpperAux(unsigned long int num);
int printInteger(va_list args);
int string_length(char *str);
int printOctal(va_list args);
int printPercent(void);
int printExclusiveString(va_list val);
int printHexadecimalAux(unsigned long int number);
int printf_pointer(va_list val);
int printrot(va_list args);
int print_string_reverse(va_list args);
int print_unsigned(va_list args);
int _putchar(char c);
int printf_string(va_list args);
int main(void);
int string_length(char *str);
int _strlenc(const char *str);
int printDecimal(va_list args);
int *_strcpy(char *dest, char *src);
int _printf(const char *format, ...);
int _strlen(char *s);

#endif
