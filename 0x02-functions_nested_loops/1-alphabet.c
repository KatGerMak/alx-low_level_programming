#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');
}
