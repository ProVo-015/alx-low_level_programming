#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @d: first number
 * @b: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int d, unsigned long int b)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = d ^ b;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
