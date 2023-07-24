#include "main.h"
#include <stdio.h>
/**
 * _printf - function that formats atguments
 * @format: string
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list list;
	fun_type fun;
	int num;

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
				num += fun.call(list);
				format++;
			}
			else
			{
				format--;
				num += _putchar(*format);
				format++;
			}
		}
		else if (*format != '%')
		{
			num += _putchar(*format);
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
