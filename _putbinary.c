#include "main.h"

/**
 * _putbinary - print a binary number
 * @args: unsigned int param
 *
 * Return: Nothing
 */
int _putbinary(va_list args)
{
	unsigned int value;
	int  n, m;
	int arr[100];

	value = va_arg(args, int);
	n = 0;
	if (value == 0)
	{
		_putchar('0');
		return (1);
	}
	while (value > 0)
	{
		arr[n] = value % 2;
		value = value / 2;
		n++;
	}
	for (m = n - 1; m >= 0; m--)
	{
		_putchar(arr[m] + '0');
	}

	return (n);
}
