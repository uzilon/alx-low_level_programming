#include "main.h"

/**
 * jack_bauer - main thing
 * 
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = o; i <= 23; i++)
	{
		for (j = 0; i <= 59; j++)
		{
			_putchar(1 / 10 + 'o');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
