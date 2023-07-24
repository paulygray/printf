#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 6, ui = 88, num1 = 6, num2 = 6;
	int n2 = 6;
	int ZERO = 0;
	printf("Len1:[%d]\n\n", n2);

	n1 = _printf("NULL: [%i]\n", NULL);
	n2 = printf("NULL: [%i]\n", NULL);
	printf("Len:[%d]\n", n1);
	printf("Len1:[%d]\n\n", n2);

	n1 = _printf("Zero: [%i]\n", ZERO);
	n2 = printf("Zero: [%i]\n", ZERO);
	printf("Len:[%d]\n", n1);
	printf("Len1:[%d]\n\n", n2);

	n1 = _printf("[%d]\n", INT_MAX);
	n2 = printf("[%d]\n", INT_MAX);
	printf("Len:[%d]\n", n1);
	printf("Len1:[%d]\n\n", n2);

	n1 = _printf("[%d]\n", INT_MIN);
	n2 = printf("[%d]\n", INT_MIN);
	printf("Len:[%d]\n", n1);
	printf("Len1:[%d]\n\n", n2);

	_printf(NULL);
	printf(NULL);

	printf("Test for Task 0\n\n");

	num1 = _printf("A %s sentence\n", "simple");
	num2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("A simple %v entence\n");
	num2 = printf("A simple %v entence\n");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("Percentage: %%\n");
	num2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("NULL: %c, %s\n", NULL, NULL);
	num2 = printf("NULL: %c, %s\n", NULL, NULL);
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("%");
	num2 = printf("%");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("A simple sentence%");
	num2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	printf("Test for Binary\n\n");

	num1 = _printf("Binary:[%b]\n", 98);
	num2 = printf("Binary:[%b]\n", 98);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	num1 = _printf("Binary:[%b]\n", 584);
	num2 = printf("Binary:[%b]\n", 584);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	num1 = _printf("Null Binary:[%b]\n", NULL);
	num2 = printf("Null Binary:[%b]\n", NULL);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	num1 = _printf("Zero Binary:[%b]\n", ZERO);
	num2 = printf("Zero Binary:[%b]\n", ZERO);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	printf("Test for Unsigned Int\n\n");

	num1 = _printf("Unsigned:[%u]\n", 65695);
	num2 = printf("Unsigned:[%u]\n", 57565);
	printf("num1:[%u]\n", num1);
	printf("num2:[%u]\n", num2);

	printf("\nTest for Unsigned Octal\n\n");

	num1 = _printf("Octal:[%o]\n", 65694595);
	num2 = printf("Octal:[%o]\n", 65694595);
	printf("num1:[%o]\n", num1);
	printf("num2:[%o]\n", num2);

	num1 = _printf("Null Octal:[%o]\n", NULL);
	num2 = printf("Null Octal:[%o]\n", NULL);
	printf("num1:[%o]\n", num1);
	printf("num2:[%o]\n", num2);

	num1 = _printf("Zero Octal:[%o]\n", ZERO);
	num2 = printf("Zero Octal:[%o]\n", ZERO);
	printf("num1:[%o]\n", num1);
	printf("num2:[%o]\n", num2);

	printf("\nTest for Unsigned Hexa-decimal\n\n");

	num1 = _printf("Unsigned hexadecimal:[%x]\n", 52468);
	num2 = printf("Unsigned hexadecimal:[%x]\n", 52468);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	printf("\n\n");

	num1 = _printf("Unsigned hexadecimal:[%X]\n", ui);
	num2 = printf("Unsigned hexadecimal:[%X]\n", ui);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	printf("\n\n");

	num1 = _printf("Zero hexadecimal:[%X]\n", ZERO);
	num2 = printf("Zero hexadecimal:[%X]\n", ZERO);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	printf("\n\n");

	num1 = _printf("Null hexadecimal:[%X]\n", NULL);
	num2 = printf("Null hexadecimal:[%X]\n", NULL);
	printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

	return (0);
}

