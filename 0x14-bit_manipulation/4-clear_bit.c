#include "main.h"

/**
 * clear_bit - sets the values of a given bits to 0
 * @n: pointers to the numbers to change
 * @index: indexes of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
