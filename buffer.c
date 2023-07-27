#include "main.h"
#include <unistd.h>
#define BUFFER_SIZE 1020
/**
 * init_buffer - function initializes buffer
 * @buffer:  paramater
 */
void init_buffer(Buffer *buffer)
{
	buffer->index = 0;
}

/**
 * add_to_buffer - function adds to the buffer
 * @c: the char to add
 * @buffer: teh buffer
 */

void add_to_buffer(Buffer *buffer, char c)
{
	if (buffer->index < BUFFER_SIZE)
	{
		buffer->buffer[buffer->index++] = c;
	}
	if (buffer->index >= BUFFER_SIZE)
	{
		write(1, buffer->buffer, buffer->index);
		buffer->index = 0;
	}
}

/**
 * flush_buffer - funtion prints
 * @buffer: paramater
 */
void flush_buffer(Buffer *buffer)
{
	if (buffer->index > 0)
	{
		write(1, buffer->buffer, buffer->index);
		buffer->index = 0;
	}
}
