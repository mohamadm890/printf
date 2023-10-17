#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
printed_chars += printf_char(&char);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
printed_chars += printf_string(char *);
}
}
else
{
_putchar(*format);
printed_chars++;
}

format++;
}

va_end(args);
return (printed_chars);
}
