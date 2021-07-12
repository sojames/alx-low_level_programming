#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/**
 * function1 - function that check if no integer is passed or letter
 * @x: character to search from.
 * Return: always return 1 after successful execution.
 *
 **/

int function1(char *x)
{
unsigned int i;
for (i = 0; i < strlen(x); i++)
{
if (!isdigit(x[i]))
	return (0);
}
return (1);
}

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
int j, a, sum = 0;
for (j = 1; j < argc; j++)
{
if (function1(argv[j]))
{
a = atoi(argv[j]);
sum += a;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);

return (0);

}

