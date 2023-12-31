#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putU - function handles cas %u
 * @args: va_list type
 * Return: int
 */
int _putU(va_list args)
{
	char buffer[20];
	int pos = 0;
	unsigned int num = va_arg(args, unsigned int);
	int n = 0;

	if (num == 0)
	{
		n++;
		_putchar('0');
		return (n);
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
/**
 * case_min - function dealin INT_MIN
 * Return: int
 */
int case_min(void)
{
	char minStr[] = "-2147483648";
	int pos;

	for (pos = 0; pos < 11; pos++)
		_putchar(minStr[pos]);
	return (11);
}

/**
 * _putd - function prints digits for %d and %i format specifiers
 * @args: va_list type
 * Return: number of digits printed
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
	if (num == INT_MIN)
		return (n + case_min());
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
