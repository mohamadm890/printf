#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string.
 * @...: Additional arguments for format placeholders.
 *
 * Return: The number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
char *str;

va_start(args, format);

while (format && *format)
{
if (*format != '%')
{
write(1, format, 1);
count++;
}
else
{
format++;

if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*format == 's')
{
str = va_arg(args, char *);
if (str == NULL)
{
str = "(null)";
}
while (*str)
{
write(1, str, 1);
str++;
count++;
}
}
else if (*format == '%')
{
write(1, "%", 1);
count++;
}
}
format++;
}

va_end(args);
return count;
}
