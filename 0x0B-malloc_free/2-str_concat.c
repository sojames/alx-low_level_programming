#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *stringcount - function that count element in an array of chars
 *
 *@work: pointer to the array
 *
 * Return: count.
 **/

int stringcount(char *work)
{
unsigned int i;
i = 0;
while (work[i] != '\0')
{
i++;
}

return (i);
}

/**
 *str_concat - function that concatenates two strings.
 *
 *@s1: first string
 *@s2: second string
 *Return: pointer
 **/

char *str_concat(char *s1, char *s2)
{
char *mem0;
unsigned int a, b, size;
a = b = 0;
if (s1 == 0)
s1 = " ";
if (s2 == 0)
s2 = " ";

size = (stringcount(s1) + stringcount(s2) + 1);
mem0 = (char *)malloc(size *sizeof(char));
if (mem0 == 0)
return (NULL);
while (*(s1 + a) != '\0')
{
*(mem0 + a) = *(s1 + a);
a++;
}
for (b = 0; *(s2 + b) != '\0'; b++)
{
*(mem0 + a) = *(s2 + b);
a++;
}
return (mem0);
}

