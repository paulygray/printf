#include "main.h"
#include  <stdio.h>

/**
 * recursive_helper - strlen getter
 * @s: the string
 * @n: int number to calculate the lentgh
 * Return: int return n
 */
int recursive_helper(char *s, int n)
{
	if (*s != '\0')
	{
		return (recursive_helper(s + 1, n + 1));
	}
	else
		return (n);
}
/**
 * _strlen_recursion - length of string
 * @s: string param
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	return (recursive_helper(s, i));
}

/**
 * _print_rev_recursion - prints revers string
 * @s: string
 * Return: number of printed
 */
int _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return (0);

}

/**
 * _putr - funtion reverses
 * @args: va_list type
 * Return: int type
 */
int _putr(va_list args)
{
	static int n;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	n = _strlen_recursion(s);
	 _print_rev_recursion(s);
	return (n);
}
/**
 * _putS - funtion reverses
 * @args: va_list type
 * Return: int type
 */
int _putS(va_list args)
{
	char nonPrintabe[] = {'\n', '\r', '\t', '\b', '\f', '\v', '\0', '\a', '\x1B'};
	int i, remainder, n = 0;
	char *s = va_arg(args, char *);
	unsigned char ch;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		int foundNonPrintable = 0;

		for (i = 0; nonPrintabe[i] != '\0'; i++)
		{
			if (*s == nonPrintabe[i])
			{
				putchar('\\');
				putchar('x');
				ch = (unsigned char)*s;
				putchar('0' + (ch / 16));
				remainder = ch % 16;
				if (remainder < 10)
					putchar('0' + remainder);
				else
					putchar('A' + (remainder - 10));
				s++;
				foundNonPrintable = 1;
				break;
			}
		}
		if (!foundNonPrintable)
		{
			n++;
			putchar(*s);
			s++;
		}
	}

	return (n);
}
