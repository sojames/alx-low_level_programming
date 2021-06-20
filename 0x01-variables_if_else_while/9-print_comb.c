#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
/* base for 0-9 with (,)*/
for (i=48; i<=57; i++)
{
putchar(i);
if (i==57)
	break;
putchar(',');
}
putchar("\n");
return (0);

}
