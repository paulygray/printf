#include "main.h"
#include <stdio.h>
#include <string.h>
int helper(char *f)
{


	int i = 0;

	if (f == NULL)
		return (i);
	if (*f == '+' || *f == '#' || *f == ' ')
		i = 1;
	else if(*(f + 1) == 'd' || *(f + 1) == 'o' || *(f + 1) == 'x' || *(f + 1) == 'X' || *(f + 1) == 'i')
		return (i);
	return (i);
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

	_strcpy(format_copy, format);
	ptr = format_copy;
	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (*ptr)
	{
		if (*ptr == '%' && *(ptr + 1) != '\0')
		{
			ptr++;
			fun = get_function(*ptr);
			if (fun.call != NULL)
			{
				num += fun.call(list);
				ptr++;
			}
			else if (helper(ptr))
			{
				if (*(ptr + 1) == 'd' || *(ptr + 1) == 'i')
					num += _putchar(*ptr);
				*ptr = '%';
				
			}
			else
			{				
				ptr--;
				num += _putchar(*ptr);
				ptr++;
			}
		}
		else if (*ptr != '%')
		{
			num += _putchar(*ptr);
			ptr++;
		}
		else
		{
			num = -1;
			ptr++;
		}
	}
	va_end(list);
	return (num);
}
