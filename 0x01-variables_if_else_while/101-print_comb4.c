#include <stdio.h>
#include <stdlib.h>
/**
 * main header goes in here
 *
 * the code follow suite
 *
 * return 0 after successful execution
 */
int main(void)
{
int base123;
int base231;
int base312;
for (base123=48; base123 <= 57; base123++)
{
for (base231=49; base231 <= 57; base231++)
{
for (base312=50; base312 <= 57; base312++)

{
    putchar(base123);
    putchar(base231);
    putchar(base312);
    if (base123==55 && base231 ==56 &&base312==57 )
    {
	    break;
    }
    putchar(',');
    putchar(' ');
}
}
}
    putchar("\n");

return (0);
}
