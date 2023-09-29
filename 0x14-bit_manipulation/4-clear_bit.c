#include "main.h"

/**
 * clear_bit - set the value of a given bit to 0
 * @n: ponter to the number to change
 * @index: index of the bit to clear
 *
 * Return:1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
