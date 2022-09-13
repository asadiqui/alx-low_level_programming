#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except 'e' and ''q'
 */

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		if (ch == 'e' || ch == 'q')
			ch++;
	}
	putchar('\n');
	return (0);
}
