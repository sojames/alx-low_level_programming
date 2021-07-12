#include<stdio.h>
#include"holberton.h"

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc:  The number of command line arguments
 * @argv: An array of size argc.
 *
 * Return: - always return 0 after successful execution.
 *
 **/

int main(int argc, char *argv[])
{
printf("%d\n", (argc - 1));

return (0);
}
