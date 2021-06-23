#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Void;
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void) /* Prototype: void print_alphabet(void)*/
{
char a;

for (a = 'a'; a <= 'z'; a++)/*function that prints the alphabet, in lowercase, followed by a new line.*/
{
_putchar(a);
}
_putchar("\n");


}
