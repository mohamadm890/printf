#include "main.h"

/**
 * print_char - print a character
 * @arg: arguments
 * Return: 1
*/
int print_char(va_list arg)
{
char str;
str = va_arg(arg, int);
_putchar(str);
return(1);
}
