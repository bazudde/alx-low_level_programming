#include "main.h"
/**
 * int _strlen - returns length of a string
 * @s: char type pointer
 * return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
