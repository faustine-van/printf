#include <stdio.h>
#include "main.h"
/**
 *print_charater - print_all
 *@ap: used to print
 *Return: 1
*/
int print_charater(va_list ap)
{
	putchar(va_arg(ap, int));
	return (1);
}
/**
 *print_string - print_all
 *@ap: used to print
 *Return: a
*/
void print_string(va_list ap)
{
	int a;
	char *str;
	char buffer[20];

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	sprintf(buffer, "%s", str);
	for (a = 0; buffer[a] != '\0'; a++)
		putchar(buffer[a]);
}
