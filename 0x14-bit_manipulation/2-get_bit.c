#include "main.h"

/**
 * get_bit - gives out the value of a/the bit at an index in a decimal number/s
 * @n: number to search
 * @index: index of the bit/s
 *
 * Return: value of the bit/s
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
