#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string parameter input
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str+=2;
	}
	_putchar('\n');
}
