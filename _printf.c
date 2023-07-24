#include "main.h"
#include <stdio.h>
/**
 * _printf - function that formats atguments
 * Return: int
 */
int num;
int _printf(const char *format, ...)
{
	va_list list;
	fun_type fun;

	num = 0;
	va_start(list, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			fun = get_function(*format);
			if (fun.call != NULL)
			{
				fun.call(list);
				format++;
			}
			else
			{
				format--;
				_putchar(*format);
				format++;
			}
		}
		else if (*format != '%')
		{
			_putchar(*format);
			format++;
		}
		else
		{
			num--;
			format++;
		}
	}

	va_end(list);
	return (num);
}
