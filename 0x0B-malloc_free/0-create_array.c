#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array chars, initializes with char.
 *@size: string function that returns a pointer.
 *@c: array character.
 * Return: Always pointer.
 */

char *create_array(unsigned int size, char c)
{
char *mem0;
unsigned int i;/* position */

mem0 = (char *)malloc(size * sizeof(c));/* declaring memory size */

if (size == 0)
return (NULL);
if (mem0 == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
*(mem0 + i) = c;
}
return (mem0);


}
