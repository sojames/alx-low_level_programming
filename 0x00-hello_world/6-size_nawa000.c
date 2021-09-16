#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)

{
/**
* int i;
* float f;
* char c;
* double d ;
* long double ld;
* long int li;
*/

printf("The size of integer on my machine in bytes is: %d \n", (unsigned int)sizeof(int) );
printf("The size of float on my machine in bytes is: %d \n", (unsigned int)sizeof(float) );
printf("The size of char on my machine in bytes is: %d \n", (unsigned int)sizeof(char) );
printf("The size of double on my machine  in bytes is: %d \n", (unsigned int)sizeof(double) );
printf("The size of long double on my machine in bytes is: %d \n", (unsigned int)sizeof(long double) );
printf("The size of long int on my machine in bytes is: %d \n", (unsigned int)sizeof(long int) );
printf("The size of long long int on my machine in bytes is: %d \n", (unsigned int)sizeof(long long int) );

	return(0);
}
