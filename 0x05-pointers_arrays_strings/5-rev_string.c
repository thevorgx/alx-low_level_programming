#include "main.h"

/**
 * rev_string -> reverse string func
 *
 * @s: Parame
 */

void rev_string(char *s)
{
	int i, swp, j, v;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	j = i - 1;
	for (v = 0; j >= 0 && v < j; j--, v++)
	{
		swp = s[v];
		s[v] = s[j];
		s[j] = swp;
	}
}
