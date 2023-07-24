#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
extern int num;
typedef struct fun
{
	char p;
	void (*call)(va_list);
} fun_type;

int _putchar(char c);
void _puts(va_list args);
void _putp(va_list args);
void _putd(va_list args);
fun_type get_function(char format);
int _printf(const char *format, ...);
#endif
