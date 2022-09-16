#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: spaces before the diagonal
 */

void print_diagonal(int n)
{
	int sttc = n; /* store orgnl val */
	int i;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar(' ');
			_putchar('\\');
		}
	}
	if (sttc <= 0)
		_putchar('\n');
}
