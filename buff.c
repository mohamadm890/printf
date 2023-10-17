#include "main.h"
/**
 * print_buff - prints buffer
 * @buff: buffer pointer
 * @numbuff: number of bytes to print
 * Return: number of bytes printed
 */
int print_buff(char *buff, unsigned int numbuff)
{
return (write(1, buff, numbuff));
}
