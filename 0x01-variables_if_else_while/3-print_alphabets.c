#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
int lower;
int upper;
for (lower=97; lower <= 122; lower++)
{
    putchar(lower );
}
for (upper=65; upper <= 90; upper++)
{
    putchar(upper);
}
putchar ('\n');
return (0);
}

