#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
int printed = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
printed = choices(format, args, printed);
format++;
}
else
{
_putchar(*format);
printed++;
format++;
}
}
va_end(args);
return (printed);
}
