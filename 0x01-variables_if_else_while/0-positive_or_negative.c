#include <stdlib.h>
#include <time.h>
/* more headers goes there */
 /**
  *main - entry point
  *
  * Return: zero
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d: is negative" );
	}
	else
	{
		if(n > 0)
		{
			printf("%d: is positive");
		}
		else
		{
			printf("%d: is zero");
		}
	}
	return (0);
}
