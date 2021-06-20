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
int lower; /* lower A-Z */
for (lower=97;lower<= 122;lower++)
{
    if(lower==101)
        continue;
    else if (lower==113)
        continue;
    putchar(lower);

}
putchar ('\n');
return (0);
}

