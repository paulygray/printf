#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
void _putc(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}
void _putcc(va_list args)
{
	char c = va_arg(args, int);
	c = '%';
	_putchar(c);
}
void _puts(va_list args)
{
	char *s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	if (s)
	{
		while (*s)
		{
			_putchar(*s);
			s++;
		}
	}
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
			return g[i];

		i++;
	}
	return empty;
}
