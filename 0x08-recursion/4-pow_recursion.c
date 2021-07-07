#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - function that searches for power between integers
 *
 * @x: integer
 *
 * @y: power
 *
 * Return: Always x pow y.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (x * _pow_recursion(x, y - 1));

}

