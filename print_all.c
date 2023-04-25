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
int print_string(va_list ap)
{
	int a;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
		putchar(str[a]);
	return (a);
}
