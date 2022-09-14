#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int hr = 0;
		
	while (hr <= 23)
	{
		int min = 0;
		while (min <= 59)
		{
			_putchar('0' + hr/10);
			_putchar('0' + hr%10);
			_putchar(':');
			_putchar('0' + min/10);
			_putchar('0' + min%10);
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
