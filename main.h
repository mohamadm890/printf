#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_buff(char *buff, unsigned int numbuff)
int par_str(char *buff_dest, va_list arg, int buff_count)
int par_perc(char *buff_dest, va_list arg, int buff_count)
int par_int(char *buff_dest, va_list arg, int buff_count)
int par_char(char *buff_dest, va_list arg, int buff_count)

#endif /* MAIN_H */

