#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value oint get_bit(unsigned long int n, unsigned int index)f the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_v;

	if (index > 63)
		return (-1);

	b_v = (n >> index) & 1;

	return (b_v);
}
