#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*Function that allocates memory using malloc.
* Return: a pointer with the memory location.
*/

void *malloc_checked(unsigned int b)
{

	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
