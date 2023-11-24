#include "main.h"

/**
 * flip_bits - count the number of bits to change
 * to get from one number to another
 * @n: firts number
 * @m: second number
 *
 * Return: number of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int c = 0;

	while (result != 0)
	{
		c += result & 1;
		result >>= 1;
	}

	return (c);
}
