#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int sttc = size; /* store orgnl val */
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (sttc <= 0)
		_putchar('\n');
}
