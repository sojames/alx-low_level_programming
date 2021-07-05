#include "holberton.h"

/**
 * _memset() function copys the first n bytes of the memory area pointed to by s with the constant byte b
 * @dest: the address of memory to be copied from
 * @src: the constant copied into in byte
 * @n: the size of the memory to be filled
 * Return: a pointer to the memory area dest.
 */

 char *_memcpy(char *dest, char *src, unsigned int n)
 {
unsigned int i;
/* declaring loop in this case for loop*/
    for (i=0; i < n; i++)
    {
        *(dest +i) = *(src + i);
    }/* end of while loop*/

return(dest);/* Returns a pointer to dest*/

 }
