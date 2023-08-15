#include "main.h"
/**
 * _islower - check lowercase
 * @c: char to check
 * Return: 1(lowercase) 0(not lowercase)
 */
int _islower(char c)
{
	if( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
