#include "main.h"

/**
 * set_bit - sets a bit at from a specific index to 1
 * @n: pointers to the numbers to change
 * @index: indexes of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
