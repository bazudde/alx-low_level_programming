#include "main.h"
/**
 * _strncat - concatenates two strings but src doesnot have to be null
 * terminated
 * @dest: char type pointer
 * @src:char type pointer 
 * return : dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n>0; j++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
