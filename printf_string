#include "main.h"
#include <stdarg.h>

/**
 * printf_string - printing a string
 * @arg: argument
 * Return: length of the string
 */
int printf_string(va_list arg)
{
char *d;
int p;
int length;

d = va_arg(arg, char*);
if (d == NULL)
{
d = "(null)";
length = _strlen(d);
for (p = 0; p < length; p++)
_putchar(d[p]);
}
else
{
length = _strlen(d);
for (p = 0; p < length; p++)
_putchar(d[p]);
}
return (length);
}
