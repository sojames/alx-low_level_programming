#include "holberton.h"
#include <stdio.h>

/**
 * mysort - function that take care of my base condition
 * _sqrt_recursion - function that return square root of a number
 * @n: integer whose square root is to be calculated
 * @i: nth rooth
 * Return: Always .
 */
int mysort(int i, int n)
{
if (n == 0 || n == 1)
return (1);
else if (i * i < n)
return (mysort(i + 1, n));
else if (i * i == n)
return (i);
else
return (-1);
}

int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)
return (-1);

else
return (mysort(i, n));

}
