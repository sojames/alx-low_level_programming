#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c) /*for function _isalpha*/
{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
/* 4 is aplha*/
else
{
return (0);
}
}
