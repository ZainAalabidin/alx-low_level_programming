#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of al its parameters.
 * @n: the number of parameter passed to the function.
 * @...: Avariable number of parameter to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 *     otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i, sum = 0;

	va_start(pa, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);

	return (sum);
}
