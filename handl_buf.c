#include "main.h"

/**
 * handl_buf - concatenats the buff char
 * @buf: buff pointer
 * @c: char to concatenat
 * @ibuf: index of buff pointer
 * Return: index of buff pointer.
 */
unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
