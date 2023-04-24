#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...)
{
	va_list ap;
	int len;
	if (format == NULL)
	{
		return(-1);
	}
	va_start(ap, format);
	len = my_vprintf(format, ap);
	va_end(ap);
	return len;
}
