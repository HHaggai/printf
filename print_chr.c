#include "main.h"
#include <stdio.h>
/**
 * print_chr - writs the char c to stdout
 * @arguments: input char
 * @buf: buff pointr
 * @ibuf: index for buff pointr
 * Return: On success 1.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
