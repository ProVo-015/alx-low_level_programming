#include "main.h"

/**
 * clear_bit - set the value of a given bit to 0
 * @b: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *b, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *b);
	return (1);
}
