#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define BUFFER_SIZE 1020




int process(char *ptr, va_list list, fun_type fun, int num, Buffer buffer)
{
	while (*ptr)
	{
		if (*ptr == '%' && *(ptr + 1) != '\0'  && *(ptr + 1) != '%')
		{
			ptr++;
			fun = get_function(*ptr);
			if (fun.call != NULL)
			{
				flush_buffer(&buffer);
				num += fun.call(list);
				ptr++;
			}
			else if (helper(ptr))
			{
				
				if (*(ptr + 1) == 'd' || *(ptr + 1) == 'i')
				{
					num++;
					add_to_buffer(&buffer, *ptr);
				}
				if (*(ptr + 1) == 'x' || *(ptr + 1) == 'X')
				{
					num += 2;
					add_to_buffer(&buffer, '#');
					add_to_buffer(&buffer, *(ptr + 1));
				}
				*ptr = '%';
			}
			else
			{
				ptr--;
				num += 1;
				add_to_buffer(&buffer, *ptr);
				ptr++;
			}
		}
		else if (*ptr == '%' && *(ptr + 1) == '%')
		{
			num++;
			add_to_buffer(&buffer, *ptr);
			ptr += 2;
		}
		else if (*ptr != '%')
		{
			num++;
			add_to_buffer(&buffer, *ptr);
			ptr++;
		}
		else
		{
			num = -1;
			ptr++;
		}
	}
	flush_buffer(&buffer);
	return (num);
}


/**
 * _printf - function that formats atguments
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list list;
	fun_type fun;
	int num = 0;
	char format_copy[1000], *ptr;
	Buffer buffer;

	init_buffer(&buffer);
	if (format == NULL)
		return (-1);
	_strcpy(format_copy, format);
	ptr = format_copy;
	va_start(list, format);
	num = process(ptr, list, fun, num, buffer);
	va_end(list);
	return (num);
}
