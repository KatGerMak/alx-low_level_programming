#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i;
	int n;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			x = i * n;

			if(n == 0)
			{
				_putchar(x + '0');
			}
			else if(x < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x/10) + '0');
				_putchar((x%10)  + '0');
			}
		}
		_putchar('\n');
	}
}
