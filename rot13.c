#include "main.h"
#include <stdio.h>

/**
 * rot13 - decode and encode function
 * @args: argument passed through printf
 *
 * Return: Pointer to the modified string
 */
int rot13(va_list args)
{
	char c;
	int n = 0;
	const char *str = va_arg(args, char *);

	while (*str)
	{
		c = *str;
		if ((c >= 'A' && c <= 'Z'))
		{
			c = ((c - 'A') + 13) % 26 + 'A';
		}
		else if ((c >= 'a' && c <= 'z'))
		{
			c = ((c - 'a') + 13) % 26 + 'a';
		}
		n++;
		_putchar(c);
		str++;
	}
	return (n);
}
