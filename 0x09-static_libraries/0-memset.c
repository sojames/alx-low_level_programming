#include "holberton.h"

/**
 * _memset - fills memory with constant b in byte
 * @s: the address of memory to be pointed
 * @b: the constant in byte
 * @n: the size of the memory to be filled
 * Return: a pointer to the memory area s.
 */


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
/* declaring loop in this case while loop*/
while (i < n)
{
*(s + i) = b; /* incrementing position */
i++;
} /* end of while loop*/
return (s);
}
