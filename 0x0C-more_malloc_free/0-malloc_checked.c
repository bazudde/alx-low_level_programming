#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * Description: if malloc fails, malloc_checked terminates normally
 * with value 98
 * @b: unsigned integer
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);

}
