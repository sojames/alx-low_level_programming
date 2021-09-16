#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"


int main(int argc, char *argv[])
{
int i, result = 1;
for (i = 1; i < argc; i++)
{
if (argc == 2)
{
int x = strtol (argv[i], NULL, 10);
result = result * x;
}
else
printf("Error"); 
}
printf("%d\n", result);

return (0);
}
