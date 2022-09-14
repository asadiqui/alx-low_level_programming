#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: - number to process
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int lstDgt;

	if (n >= 0)
		lstDgt = n % 10;
	else
		lstDgt = (-1) * (n % 10);
	return (lstDgt);
}
