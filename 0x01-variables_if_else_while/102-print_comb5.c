#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int base126;
int base136;

for (base126=48; base126 <= 57; base126++)
{
for (base136=49; base136 <= 57; base136++)
{
    putchar(base126);
    putchar(base136);
    putchar(' ');
    putchar(base136);
    putchar(base126);
    if (base126==57 && base136 ==57)
        break;
    putchar(',');
}
}

putchar("\n");
return (0);
}
