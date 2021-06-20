#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*  main - assigns a random number to int n everytime
*
* more headers goes there
*
* betty style doc for function main goes there 
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand (time(0));
n = rand() - RAND_MAX / 2 ;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
