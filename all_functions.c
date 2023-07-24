#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _putc - function prints chars
 *@args: valist type arguments
 * Return: int num of printed
 */
int  _putc(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
/**
 * _putcc - function prints %
 *@args: valist type arguments
 * Return: int num of printed
 */
int _putcc(va_list args)
{
	char c = va_arg(args, int);

	c = '%';
	return (_putchar(c));
}
/**
 * _puts - function prints strings
 *@args: valist type arguments
 * Return: int num of printed
 */
int _puts(va_list args)
{
	int num = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	if (s)
	{
		while (*s)
		{
			_putchar(*s);
			s++;
			num++;
		}
	}
	return (num);
}

fun_type get_function(char format)
{
	fun_type empty = {'\0', NULL};
	fun_type g[] = {
		{'s', _puts},
		{'c', _putc},
		{'d', _putd},
		{'i', _putd},
		{'%', _putcc},
		{'p', _putp}
	};

	int i = 0;

	while (i < 6)
	{
		if (g[i].p == format)
			return (g[i]);

		i++;
	}
	return (empty);
}
