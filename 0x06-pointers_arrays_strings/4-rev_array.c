#include "main.h"
/**
 * reverse_array - reverses array contents
 * @a: the array
 * @n: num of array elements
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for ( i = 0, j = n -1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
