#include "holberton.h"
#include <stdio.h>
/**
 *_print_rev_recursion - print string in reverse format.
 *@s: string to be printed
 *
 * Return: Always string.
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
