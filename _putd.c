#include <stdio.h>
#include <stdarg.h>
#include "main.h"
void _putd(va_list args)
{
	char buffer[20];
	int pos = 0;
	int num = va_arg(args, int);


	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}


	while (num != 0)
	{
		buffer[pos] = '0' + (num % 10);
		num /= 10;
		pos++;
	}

	while (pos > 0)
	{
		pos--;
		_putchar(buffer[pos]);
	}
}

