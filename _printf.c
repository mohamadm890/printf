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
va_list args;
int len = 0;
va_start(args, format);
for (int p = 0; format[p] != '\0'; p++)
{
if (format[p] == '%')
{
p++;
if (format[p] == 'c')
{
char x = va_arg(args, int);
write(1, &x, 1);
len++;
}
else if (format[p] == 's')
{
const char *str = va_arg(args, const char *);
for (int i = 0; str[i] != '\0'; i++)
{
write(1, &str[i], 1);
len++;
}
}
else if (format[p] == '%')
{
write(1, "%", 1);
len++;
}
else
{
}
}
else
{
write(1, &format[p], 1);
len++;
}
}
va_end(args);
return (len);
}
