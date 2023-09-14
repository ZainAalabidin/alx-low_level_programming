#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *coma = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", coma, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", coma, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", coma, va_arg(lst, double));
					break;
				case 's':
					string = va_arg(lst, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", coma, string);
					break;
				default:
					i++;
					continue;
			}
			coma = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(lst);
}
