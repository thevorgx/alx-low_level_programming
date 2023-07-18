#include <unistd.h>
#include <string.h>

/**
 * ecrire - print number using write, strlen(print) to get the length
 * of the message we are printing
 *@print: is the parameter of the function
 * Return: Always 0 (Success)
 */
void ecrire(char print[])
{
	write(1, print, strlen(print));
}

/**
 * main - declaring the parameter used for ecrire()
 * calling the function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char print [] = "_putchar\n";

	ecrire(print);
	return (0);
}
