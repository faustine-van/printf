#include "main.h"
#include <stdio.h>
/**
 *NonPrintableChar - handle and  print nonPrintable character
 *@str: string format
 *
*/
void NonPrintableChar(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			printf("\\x%02X", *str);
		}
		else
		{
			putchar(*str);
		}
		str++;
	}
}
