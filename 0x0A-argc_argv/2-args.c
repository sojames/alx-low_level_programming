#include<stdio.h>
#include"holberton.h"

/**
 * main -  function that program that prints all arguments it receives.
 *
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 *
 * Return: Always return 0 after successful execution
 *
 **/

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
