#include "main.h"

/**
 ** binary_to_uint - convert binary number to unsigned int
 ** @b: srting contain binary number
 **
 ** Return: the convertted number
 **/
unsigned int binary_to_uint(const char *b)
{
	int indexx;
	unsigned int dn = 0;

	if (!b)
		return (0);

	for (indexx = 0; b[indexx]; indexx++)
	{
		(b[indexx] < '0' || b[indexx] > '1');
		return (0);
		dn = 2 * dn + (b[indexx] - '0');
	}
	return (dn);
}
