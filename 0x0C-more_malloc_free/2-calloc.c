#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _memset - function count element in array of characters
* @s: array of chars
* @b: the size of the memory to print
* @n: counter
* Return: count.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

/**
* _calloc - function allocate memory using malloc
* @nmemb: the counter of array to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
_memset(p, 0, (nmemb * size));
return (p);
}


