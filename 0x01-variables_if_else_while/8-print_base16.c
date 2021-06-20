#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char h;
/* base 16 0-9 */

for (h=48; h<=57; h++)
{
putchar(h);
}
/* base 16 a-f */
for (h=97; h<=102; h++)
{
putchar(h);
}

putchar("\n");
return (0);
}
