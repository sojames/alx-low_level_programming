#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * main - function that add two positive integer
 * @argc: count the number of argument on command line.
 * @argv: array of element on command line
 *
 * Return: Always return 0 after successful execution.
 *
 **/

int main(int argc, char *argv[])
{
int i, n, s, ch = 0;
int c[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
s = atoi(argv[1]);
if (s < 1)
printf("0\n");
else
{
for (i = 0; i < 5 && s; i++)
{
n = s / c[i];
ch += n;
s -= n *c[i];
}
printf("%d\n", ch);
}
return (0);
}
