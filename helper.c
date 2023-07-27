#include <stdio.h>
/**
 * helper - function does some proces of printf
 *@f: format paramater
 * Return: int
 */
int helper(char *f)
{


	int i = 0;
	char c = *(f + 1);

	if (f == NULL)
		return (i);
	if (*f == '+' || *f == '#' || *f == ' ')
		i = 1;
	else if (c == 'd' || c == 'o' || c == 'x' || c == 'X' || c == 'i')
		return (i);
	return (i);
}
