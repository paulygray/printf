#include "main.h"
#include "main.h"
/**
 * _print_rev_recursion - prints revers string
 * @s: string
 */
void _print_rev_recursion(char *s, int n)
{
	if (*s)
	{
		_print_rev_recursion(s + 1, n);
		_putchar(*s);
		n++;
	}

}

int _putr(va_list args)
{
	static int n = 0;
	char *s = va_arg(args, char *);
	_print_rev_recursion(s, n);
	return (n);
	
}