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
	int n;
	
	n = _printf("%S\n", "Best\rSchool");
	printf("%d\n", n);
	return (0);
}
