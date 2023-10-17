#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int Choices(const char *format, va_list args, int printed);
int printf_string(va_list args, int printed);
int printf_char(va_list args, int printed);
int printf_integer(va_list args, int printed);
#endif /* MAIN_H */

