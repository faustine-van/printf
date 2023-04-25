#include <stdio.h>
#include "main.h"
/**
 *print_all - print_all
 *@buffer: buffer used to print
*/
void print_all(char *buffer)
{
	int i;

	for (i = 0; buffer[i] != '\0'; i++)
	{
		putchar(buffer[i]);
	}
}
