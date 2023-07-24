#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct fun - is datatype declaration
 * @p: hols chars
 * @call: is function name
 */
typedef struct fun
{
	char p;
	int (*call)(va_list);
} fun_type;

int _putchar(char c);
int _puts(va_list args);
int _putp(va_list args);
int _putd(va_list args);
fun_type get_function(char format);
int _printf(const char *format, ...);
int _putbinary(va_list args);
int _putU(va_list args);
int _putx(va_list args);
int _putX(va_list args);
int _puto(va_list args);
#endif
