#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#include <stdarg.h>

int _printf(const char *format, ...);

int handle_print(const char *fmt, int *i, va_list args,
char buffer[], int flags, int width, int precision,
int size);

int print_char(va_list args, char buffer[], int width,
int size, int precision, int flags);

int print_string(va_list args, char buffer[], int size,
int flags, int precision, int width);

int print_percent(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_int(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_binary(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_unsigned(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_octal(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_hexadecimal(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_hexa_upper(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_hexa(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_non_printable(va_list args, char buffer[], int size,
int flags, int width, int precision);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list args);
int get_precision(const char *format, int *i, va_list args);
int get_size(const char *format, int *i);

int print_reverse(va_list args, char buffer[], int size,
int flags, int width, int precision);

int print_rot13string(va_list args, char buffer[], int size,
int flags, int width, int precision);

int handle_write_char(char c, char buffer[], int size,
int flags, int width, int precision);

int write_number(int is_positive, int ind, char buffer[], int size,
int flags, int width, int precision);

int write_num(int ind, char bff[], int length,
int flags, int width, int precision,
char padd, char extra_c);

int write_pointer(char buffer[], int ind, int length,
int width, int flags, char padd,
char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind, char buffer[],
int flags, int width, int precision, int size);

int is_printable(char);

int append_hexa_code(char, char[], int);

int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

/* FLAGS */

#define FLAG_MINUS 1
#define FLAG_PLUS 2
#define FLAG_ZERO 4
#define FLAG_HASH 8
#define FLAG_SPACE 16

/* Sizes */
#define SIZE_LONG 2
#define SIZE_SHORT 1

/**
 * struct fmt - Struct op.
 *
 * @fmt: the format.
 * @f: Function associated.
 */

struct fmt
{
char *fmt;
int (*f)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - struct op
 * @fmt: The format.
 * @fmt_t: The function associated.
*/
typedef struct fmt fmt_t;

#endif


