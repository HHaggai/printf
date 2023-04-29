#include "main.h"
#include <stdio.h>

/**
 * print_prg - writes the char c to stdout
 * @a: input char
 * @buf: buff pointr
 * @i: index for buff pointr
 * Return: On success 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
