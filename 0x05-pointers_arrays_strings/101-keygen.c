#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random password
 *
 * Return: 0, nothing, nada, walo.
 */

int main(void)
{
	int summ;
	char ran;

	srand(time(NULL));
	while (summ <= 2772)
	{
		ran = rand() % 128;
		summ += ran;
		putchar(ran);
	}
	putchar(2772 - summ);
	return (0);
}
