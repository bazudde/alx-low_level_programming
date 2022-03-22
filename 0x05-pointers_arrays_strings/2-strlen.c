#include "main.h"
/**
 * int_strlen - returns length of a string
 * @s: char type pointer
 */

int_strlen(char *s)
{
	int c;

	for(c = 0; s[c] != '\0'; c++)
		;

	return(c);
}	
	
