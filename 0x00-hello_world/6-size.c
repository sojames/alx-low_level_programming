#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)

{

 int i;
 float f;
 char c;
 double d ;
 long double ld;
 long int li;

printf("The size of integer on my machine in bytes is: %d \n", (unsigned int)sizeof(i) );
printf("The size of float on my machine in bytes is: %d \n", (unsigned int)sizeof(f) );
printf("The size of char on my machine in bytes is: %d \n", (unsigned int)sizeof(c) );
printf("The size of double on my machine  in bytes is: %d \n", (unsigned int)sizeof(d) );
printf("The size of long double on my machine in bytes is: %d \n", (unsigned int)sizeof(ld) );
printf("The size of long int on my machine in bytes is: %d \n", (unsigned int)sizeof(li) );

	return(0);
}
