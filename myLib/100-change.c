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
int i, T, c, a;
i = T = c = a = 0;
int coin [] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
T = atoi(argv[i]);
if (T <= 0)
{
printf("0\n");
return (0);
}
while (coin[i] != 0)
{
if (T >= coin[i])
{
a = (T / coin[i]);
c += a;
T -= coin[i] * a;
}
i++;
}
printf("%d\n", c);

return (0);
}
