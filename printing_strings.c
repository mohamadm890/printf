#include "main.h"

/**
 * printf_string -printing a string
 *@arg: argument
 *Return: the leangth of the string
*/
int printf_string(va_list arg)
{
char *d
int p;
int length;

d = va_arg(arg, char *);
if (d == NULL)
{
d = "(null)";
length = _strlen(d);
for (p = 0; p < length; p++)
return (length);
}
else
{
length = _strlen(d);
for (p = 0; p < length; p++)
_putchar(d[p]);
return (length);
}
