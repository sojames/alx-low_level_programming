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
for (lower=97; lower <= 122; lower++)
{
    putchar(lower);
}
	putchar("\n");
return (0);
}
