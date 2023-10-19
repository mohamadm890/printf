<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H
/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;
=======
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list arg);
int _strlen(char *d);
int printf_string(va_list arg);
int _strlenc(const char *d);
int printf_37(void);
void print_buffer(char buffer[], int *buff_ind);
>>>>>>> ac22cc40fff10f04ebde2fda94b748a31a0c0f2c

#endif
