# include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int w = 0, men;

	while (s[men++])
		w++;

	for (men = w -1; men >= 0; men--)
		_putchar(s[men]);

	_putchar('\n');
}
