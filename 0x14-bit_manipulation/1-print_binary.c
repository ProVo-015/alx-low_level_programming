#include "main.h"

/**
 * print_binary - printing the binary correspondent of a decimal number
 * @d: number to printing in binary
 */
void print_binary(unsigned long int d)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = d >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
