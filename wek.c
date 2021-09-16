#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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
a = strrol(argv[i], NULL, 10);
b = strrol(argv[i + 1], NULL, 10);
c = a * b;
printf("%d\n", c);
}
return (0);
}
