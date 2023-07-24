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

int _putx(va_list args)
{
	char buffer[20];
	int pos = 0;
	unsigned int num = va_arg(args, unsigned int);
	int n = 0;

	if (num == 0)
	{
		n++;
		_putchar('0');
		return n;
	}

	while (num != 0)
	{
		int rem = num % 16;
		if (rem < 10)
			buffer[pos] = '0' + rem;
		else
			buffer[pos] = 'a' + (rem - 10);
		num /= 16;
		pos++;
	}

	while (pos > 0)
	{
		pos--;
		n++;
		_putchar(buffer[pos]);
	}

	return n;
}
/**
 * _putX - function prints hexadecimal digits with uppercase for %X format specifier
 * @args: va_list type
 * Return: number of digits printed
 */
int _putX(va_list args)
{
	char buffer[20];
	int pos = 0;
	unsigned int num = va_arg(args, unsigned int);
	int n = 0;

	if (num == 0)
	{
		n++;
		_putchar('0');
		return n;
	}

	while (num != 0)
	{
		int rem = num % 16;
		if (rem < 10)
			buffer[pos] = '0' + rem;
		else
			buffer[pos] = 'A' + (rem - 10);
		num /= 16;
		pos++;
	}

	while (pos > 0)
	{
		pos--;
		n++;
		_putchar(buffer[pos]);
	}

	return n;
}
/**
 * _puto - function prints octal digits for %o format specifier
 * @args: va_list type
 * Return: number of digits printed
 */
int _puto(va_list args)
{
	char buffer[20];
	int pos = 0;
	unsigned int num = va_arg(args, unsigned int);
	int n = 0;

	if (num == 0)
	{
		n++;
		_putchar('0');
		return n;
	}

	while (num != 0)
	{
		buffer[pos] = '0' + (num % 8);
		num /= 8;
		pos++;
	}

	while (pos > 0)
	{
		pos--;
		n++;
		_putchar(buffer[pos]);
	}

	return n;
}
