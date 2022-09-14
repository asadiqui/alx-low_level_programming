#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Start from this integer
 *
 * Description: checked for -98 <= n <= 111
 */

/**
 * _abs - get the absolute value 
 * @n: of this integer
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

void print_to_98(int n)
{
	int sttc = n; /* store the original value of n */

	while (n != 98)
	{
		if (n >= 100)
			_putchar(n / 100 + '0'); /* 1sf dgt */

		/* getting 2nd dgt, 99 is an edge case */
		if (n == 99)
			_putchar('9');
		if (n >= 10 && n != 99)
		{
			if (sttc >= 99) /* numbers with 3 dgts */
				_putchar((n - 100) / 10 + '0');
			else /* numbers with 2 dgts */
				_putchar(n / 10 + '0');
		}

		/* getting 3rd dgt */
		if (n >= 0) /* for positive n */
		{
			_putchar(n % 10 + '0'); /* 3rd dgt */
		}
		else /* for negative n */
		{
			if (n <= -10)
			{
				_putchar('-');
				_putchar(_abs(n) / 10 + '0');
				_putchar(_abs(n) % 10 + '0');
			}
			else
			{
				_putchar('-');
				_putchar(_abs(n) % 10 + '0');
			}
		}

		_putchar(',');
		_putchar(' ');
		if (n >= 98)
			n--; /* count down to 98 */
		else
			n++; /* count up to 98 */
	}

	_putchar('9'); /* 98 reached */
	_putchar('8');
	_putchar('\n');
}
