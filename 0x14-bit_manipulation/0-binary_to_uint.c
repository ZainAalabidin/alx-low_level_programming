#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: srting contain binary number
 *
 * Return: the convertted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int dnum = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		dnum = 2 * dnum + (b[index] - '0');
	}

	return (dnum);
}
