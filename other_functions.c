#include "main.h"
#include  <stdio.h>

#include "main.h"
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


int _putr(va_list args)
{
	static int n = 0;
	char *s = va_arg(args, char *);

	
	if (s == NULL)
		s = "(null)";
	n = _strlen_recursion(s);
	 _print_rev_recursion(s);
	return (n);
	
}
