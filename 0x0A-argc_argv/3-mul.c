#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"

/**
 * main - function that multiply two number.
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments.
 *
 * Return: Always return 0 after successful execution.
 *
 **/

int main(int argc, char *argv[])
{
int i = 1, a, b, c;
(void) argc;

if (argv[i] ==  0 || argv[i + 1] == NULL)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[i]);
b = atoi(argv[i + 1]);
c = a *b;
printf("%d\n", c);
}
return (0);
}
