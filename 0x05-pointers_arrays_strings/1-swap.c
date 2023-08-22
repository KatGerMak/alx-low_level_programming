#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: int to swap
 * @b: int 2 to swap
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
