#include "holberton.h"
#include <stdio.h>

/**
 * factorial - function check the factorial of a number.
 * @n: number whose factorial is to be calculated
 * Return: Always n.
 */

int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
