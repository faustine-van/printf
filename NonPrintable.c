#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *NonPrintableChar - handle and  print nonPrintable character
 *@str: string format
 *Return: pointer pointed to
*/
char *NonPrintableChar(char *str)
{
	char *ptr;

	ptr = malloc(sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	while (*ptr)
	{
		if (*ptr < 32 || *ptr >= 127)
		{
			printf("\\x%02X", *ptr);
		}
		else
		{
			putchar(*ptr);
		}
		ptr++;
	}
	return (ptr);
	free(ptr);
}
