#include "maiin.h"
/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
			;
	
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j]
			;
	}

	dest[i] = '\0';
	return (dest);
}
