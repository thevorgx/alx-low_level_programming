#include "main.h"

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s) + 2);
}
