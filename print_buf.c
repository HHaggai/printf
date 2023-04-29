#include "main.h"

/**
 * print_buf - prnts buff
 * @buf: buff pointr
 * @nbuf: numb of bytes to prnt
 * Return: num of bytes prnted.
 */
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
