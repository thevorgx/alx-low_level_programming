#include "main.h"

/**
 * _atoi -> Convert string to integer
 *
 * @s: Param
 *
 * Return: Int Converted
 */

int _atoi(char *s)
{
	int i, sin;
	unsigned int v;

	i = 0;
	sin = 1;
	v = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sin *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			v = (v * 10) + (s[i] - '0');
		}
		else if (v > 0)
			break;
		i++;
	}
	return (v * sin);
}
