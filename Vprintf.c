#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 *my_vprintf - function work as vprintf function
 *@ap: initialization
 *@format: string
 *Return: len
*/
int my_vprintf(const char *format, va_list ap)
{
	int j, len = 0;
	const char *p = format;
	char buffer[20];
	/*char *s;*/
	int x, X, d, o, u;
	void *ptr;
	unsigned int i, b;
	char *S;

	while (*p)
	{
		if (p == NULL)
		{
			return (-1);
		}
		if (*p == '%')
		{
			switch (*++p)
			{
				case 'c':
					print_charater(ap);
					break;
				case 's':
					print_string(ap);
					break;
				case '%':
					putchar('%');
					len++;
					break;
				case 'd':
					d = va_arg(ap, int);
					sprintf(buffer, "%d", d);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;
				case 'i':
					i = va_arg(ap, unsigned int);
					sprintf(buffer, "%i", i);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;
				case 'x':
					x = va_arg(ap, int);
					sprintf(buffer, "%x", x);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;
				case 'X':
					X = va_arg(ap, int);
					sprintf(buffer, "%X", X);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;
				case 'p':
					ptr = va_arg(ap, int*);
					sprintf(buffer, "%p", ptr);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;

				case 'o':
					o = va_arg(ap, int);
					sprintf(buffer, "%o", o);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;

				case 'u':
					u = va_arg(ap, int);
					sprintf(buffer, "%u", u);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;
				case 'b':
					b = va_arg(ap, unsigned int);
					if (b < 1)
						return (-1);
					decimal_to_anyBase(buffer, b, 2);
					for (j = 0; buffer[j] != '\0'; j++)
					{
						putchar(buffer[j]);
						len++;
					}
					break;
				case 'S':
					S = va_arg(ap, char *);
					NonPrintableChar(S);
					break;
				default:
					putchar(*p);
					len++;
					break;
			}
			p++;
		}
		else
		{
			putchar(*p++);
			len++;
		}
	}
	va_end(ap);
	return (len);
}
