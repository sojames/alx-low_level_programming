#include <stdio.h>

int main (void)

{
/* int i;
* float f;
* char c;
* double d ;
* long double ld;
* long int li;
*/

int i;
float f;
char c;
double d ;
long double ld;
long int li;

printf("The size of integer on my machine in bytes is: %lu \n", (unsigned long)sizeof(i) );
printf("The size of float on my machine in bytes is: %lu\n", (unsigned long)sizeof(f) );
printf("The size of char on my machine in bytes is: %lu\n", (unsigned long)sizeof(c) );
printf("The size of double on my machine  in bytes is: %lu\n", (unsigned long)sizeof(d) );
printf("The size of long double on my machine in bytes is: %lu \n", (unsigned long)sizeof(ld) );
printf("The size of long int on my machine in bytes is: %lu \n", (unsigned long)sizeof(li) );

	return(0);
}
