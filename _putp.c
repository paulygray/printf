#include "main.h"
#include <stdarg.h>
#include <stdint.h>
/**
 * _putp - function prints addres
 *@args: Va_list
 * Return: num of digits
*/
int _putp(va_list args)
{
	uintptr_t num = (uintptr_t)va_arg(args, void *);
	char buffer[20];
	int pos = 0;
	int n = 2;


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
		n++;
	}
	return (n);
}
