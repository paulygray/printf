#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putd - function prints digits
 * @args:  va_list type
 * Return: number of digits
 */
int _putd(va_list args)
{
	char buffer[20];
	int pos = 0;
	int num = va_arg(args, int);
	int n = 0;


	if (num == 0)
	{
		n++;
		_putchar('0');
		return (n);
	}

	if (num < 0)
	{
		n++;
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
		n++;
		_putchar(buffer[pos]);
	}
	return (n);
}

