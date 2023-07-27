#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define BUFFER_SIZE 1020
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

/**
 * struct - typdef for buffer
 * @buffer: char* buffer
 * @index: index
 */
typedef struct {
	char buffer[BUFFER_SIZE];
	int index;
} Buffer;

void init_buffer(Buffer *buffer);
void flush_buffer(Buffer *buffer);
void add_to_buffer(Buffer *buffer, char c);
int helper(char *);
char *_strcpy(char *dest, const char *src);
int _print_rev_recursion(char *s);
int _putr(va_list args);
int _putchar(char c);
int _puts(va_list args);
int _putp(va_list args);
int _putd(va_list args);
fun_type get_function(char  format);
int _printf(const char *format, ...);
int _putbinary(va_list args);
int _putU(va_list args);
int _putx(va_list args);
int _putX(va_list args);
int _puto(va_list args);
int _putS(va_list args);
int rot13(va_list args);
#endif
