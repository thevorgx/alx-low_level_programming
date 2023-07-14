#include <stdio.h>
 
/**
 * main - print alpha
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);

putchar('\n');

return (0);
}
