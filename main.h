#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printChar(char c);
int my_vprintf(const char *format, va_list ap);
void decimal_to_anyBase(char *converted, unsigned int n, int base);
void NonPrintableChar(char *str);
int print_charater(va_list ap);
void print_string(va_list ap);
void revString(char *str);
int _printf(const char *format, ...);
/*char *intoBin(unsigned int n);*/

#endif
