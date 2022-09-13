#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch = 0;

	while (ch < 8)
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');

	return (0);
}
