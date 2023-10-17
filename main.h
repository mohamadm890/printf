#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list *arg);
int _strlen(char *d);
int printf_string(va_list arg);
int _strlenc(const char *d);
int printf_37(void);

#endif /* MAIN_H */
