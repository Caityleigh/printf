#include "main.h"

/**
 * string_length - Returns the length of a string.
 * @str: Type char pointer.
 * Return: Length of the string.
 */

int string_length(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length); /* Return the length of the string */
}

/**
 * const_string_length - Returns the length of a constant string.
 * @str: Type constant char pointer.
 * Return: Length of the string.
 */

int const_string_length(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length); /* Returns the length of string */
}

