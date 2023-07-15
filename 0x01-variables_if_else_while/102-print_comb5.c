#include <stdio.h>

/**
 * main - Entry point Print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v1, v2;

	for (v1 = 0; v1 < 100; v1++)
	{
		for (v2 = v1; v2 < 100; v2++)
		{
			if (v1 != v2)
			{
				putchar((v1 / 10) + '0');
				putchar((v1 % 10) + '0');
				putchar(' ');
				putchar((v2 / 10) + '0');
				putchar((v2 % 10) + '0');
				if (v1 != 98 || v2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
