#include <stdio.h>
/**
 * star - Function with constructor attribute to print a message on startup
 * auto before main.
 *
 */
void star(void) __attribute__ ((constructor));
void star(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
