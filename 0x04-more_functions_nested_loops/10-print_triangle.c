#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int sttc = 9; /* store orgnl val */
	int i;
	int spc, hsh; /* not required to use 2 vars */

	for (i = 1; i <= 9; i++)
	{
		for (spc = sttc - i - 1; spc >= 0; spc--)
			putchar('.');
		for (hsh = i - 1; hsh >= 0; hsh--)
			putchar('#');
		putchar('\n');
	}

	if (sttc <= 0)
		putchar('\n');
}
