#include "holberton.h"

/**
 *_puts_recursion - function use to print string recursively
 *@s: A string to be printed
 *Return: Always  string.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
