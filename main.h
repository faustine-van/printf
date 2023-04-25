#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int my_vprintf(const char *format, va_list ap);
void decimal_to_anyBase(char *converted, unsigned int n, int base);
void NonPrintableChar(char *str);
void print_all(char *buffer);
int _printf(const char *format, ...);
/*char *intoBin(unsigned int n);*/

#endif
