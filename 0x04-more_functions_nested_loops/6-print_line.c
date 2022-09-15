#include "main.h"

/**
 * print_line - print a straight line
 * @n: the lenght of line
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
}
