#include "main.h"

/**
 * fill_oct_array - writes the char c to stdout
 *
 * @bnr: arr where is stord the binry.
 * @oct: arr where is stord the octal.
 *
 * Return: binry arr.
 */
char *fill_oct_array(char *bnr, char *oct)
{
	int op, i, j, ioct, limit;

	oct[11] = '\0';
	for (i = 31, ioct = 10; i >= 0; i--, ioct--)
	{
		if (i > 1)
			limit = 4;
		else
			limit = 2;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
