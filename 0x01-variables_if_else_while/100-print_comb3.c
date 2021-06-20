#include <stdio.h>
/**
 * main header goes here
 * content follow suite
 *
 * return 0 after successful execution
 */
int main(void)
{
int front;
int back;
for (front=48; front<=57; front++)
{
for (back=49; back<=57;back++)
{
	putchar (front);
	putchar(back);
	if (front ==56 && back==57)
	{
	break;
	}
		putchar(',');
putchar(' ');
}
}
putchar ("\n");
return (0);
}
