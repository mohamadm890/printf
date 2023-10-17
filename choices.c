#include "main.h"
/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @printed: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */
int Choices(const char *format, va_list args, int printed)
{
switch (*format)
{
case 'd':
case 'i':
printed = printf_integer(args, printed);
break;
case 'c':
_putchar(va_arg(args, int));
printed++;
break;
case 's':
printed = printf_string(args, printed);
break;
case '%':
_putchar('%');
printed++;
break;
default:
break;
}
return (printed);
}
