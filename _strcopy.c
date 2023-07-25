#include "main.h"
/**
 * _strcpy - copy string
 * @dest: to copy to
 * @src: to copy from
 * Return: return copy
 */

char *_strcpy(char *dest, const char *src)
{
	char *temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
