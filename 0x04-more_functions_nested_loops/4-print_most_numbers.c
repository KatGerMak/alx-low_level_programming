#include "main.h"
/**
 * print_most_numbers - print nums 0 to 9 
 * except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_printchar(i);
		}
	}
	_printchar('\n');
}
