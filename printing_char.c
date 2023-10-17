#include "main.h"
#include <stdarg.h>

/**
 * printf_char - print a character
 * @arg: argument
 * Return: 1
 */
int printf_char(va_list *arg)
{
char str = va_arg(arg, int);
_putchar(str);
return (1);
}

