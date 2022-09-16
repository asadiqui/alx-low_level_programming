#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int sttc = size; /* store orgnl val */
	int i;
	int spc, hsh; /* not required to use 2 vars */

	for (i = 1; i <= size; i++)
	{
		for (spc = sttc - i - 1; spc >= 0; spc--)
			_putchar('.');
		for (hsh = i - 1; hsh >= 0; hsh--)
			_putchar('#');
		_putchar('\n');
	}

	if (sttc <= 0)
		_putchar('\n');
}
