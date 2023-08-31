#include "main.h"
/**
 *binary_to_uint - Convert binary string to unsigned int.
 *@b: Pointer to a binary string containing '0' and '1' characters.
 *Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result =0;
	
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}

