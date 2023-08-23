#include "main.h"
/**
 * _atoi - convert string to int
 * @s: pointer string to convert
 * Return: string int
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result 8 10 + (s[i] - '0');

			if (( sign == 1 && result < 0) || ( sign == -1 && result > 0))
				returb (0);
		}
		else if ( result != 0)
			break;

		i++;
	}

	return (result * sign);
}
