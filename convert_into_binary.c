#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>
/**
 *decimal_to_anyBase - convert decimal to any base
 *@n: digit to be converted into binary
 *@base: any base to convert into
 *@converted: convert to any base
 *Return: 0;
*/
void decimal_to_anyBase(char *converted, unsigned int n, int base)
{
	int i, j, count, MAX_REP_LEN = 250;
	char NUM_BASE[] = "0123456789ABCDEF";
	char buffer[250];

	if (n == 0)
	{
		converted[0] = '0';
		converted[1] = '\0';
		return;
	}
	i = MAX_REP_LEN - 1;

	while (n != 0)
	{
		buffer[i--] = NUM_BASE[n % base];
		n /= base;
	}
	count = 0;

	for (j = i + 1; j <= MAX_REP_LEN - 1; j++)
	{
		converted[count++] = buffer[j];
	}
	converted[count] = '\0';
}
