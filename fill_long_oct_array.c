#include "main.h"

/**
 * fill_long_oct_array - calc a long octal numb
 *
 * @bnr: arr where is stord the binry.
 * @oct: arr where is stord the octal.
 *
 * Return: binry arr.
 */
char *fill_long_oct_array(char *bnr, char *oct)
{
	int op, i, j, ioct, limit;

	oct[22] = '\0';
	for (i = 63, ioct = 21; i >= 0; i--, ioct--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
