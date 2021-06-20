#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lower; /* lower A-Z */
for (lower='a';lower<= 'z';lower++)
{
    if(lower=='q')
        continue;
    else if (lower=='e')
        continue;
    putchar(lower);

}
putchar ('\n');
return (0);
}

