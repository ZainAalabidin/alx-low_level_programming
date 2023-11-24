#include "main.h"

/**
 * print_binary - print the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int index, c = 0;
	unsigned long int stand;

	for (index = 63; index >= 0; index--)
	{
		stand = n >> index;

		if (stand & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
