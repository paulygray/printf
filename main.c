#include <stdio.h>
#include "main.h"

int main() {
	int num = 42;
	double value = 3.14;
	unsigned int octalNum = 52;
	char *str = "Hello, World!";


	_printf("Custom _printf:\n");
	_printf("Integer with plus sign: %+d\n", num);
	_printf("Floating-point with plus sign: %+f\n", value);
	_printf("Unsigned octal with leading 0: %#o\n", octalNum);
	_printf("String with spade: % s\n", str);
	
	/* Using standard printf function*/
	printf("\nStandard printf:\n");
	printf("Integer with plus sign: %+d\n", num);
	printf("Floating-point with plus sign: %+f\n", value);
	printf("Unsigned octal with leading 0: %#o\n", octalNum);
	printf("String with spade: %s\n", str);

	return 0;
}
