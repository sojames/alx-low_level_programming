#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - function that allocates memory using malloc.
*@b: count
* Return: Always pointer.
*/

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
exit(98);

return (p);
}

