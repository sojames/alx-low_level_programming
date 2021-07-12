#include<stdio.h>
#include"holberton.h"

/**
 * main - function or program that prints its name, followed by a new line.
 * @argc:  The size of the argv array
 * @argv: An array containing the program command line arguments
 *
 * Return: Always return 0 after succeddful execution
 *
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
	printf("%s\n", argv[0]);

return (0);

}
