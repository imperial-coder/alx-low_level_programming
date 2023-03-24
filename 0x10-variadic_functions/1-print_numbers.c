#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: separator to use
 * @n: number of variable argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && i == n - 1)
			printf("%d", va_arg(ap, int));
		else
			printfi("%d%s", va_arg(ap, int), separator);
	}

	va_end(ap);
	printf("\n");
}

