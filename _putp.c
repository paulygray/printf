#include "main.h"
#include <stdarg.h>
#include <stdint.h>
void _putp(va_list args)
{
	uintptr_t num = (uintptr_t)va_arg(args, void *);
	char buffer[20];
	int pos = 0;


	_putchar('0');
	_putchar('x');

	while (num != 0)
	{
		int rem = num % 16;
		buffer[pos] = (rem < 10) ? ('0' + rem) : ('a' + rem - 10);
		num /= 16;
		pos++;
	}


	while (pos > 0)
	{
		pos--;
		_putchar(buffer[pos]);
	}
}
