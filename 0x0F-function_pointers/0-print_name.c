#include"function_pointers.h"
/**
 * print_name - function that print name
 * @name: name to be printed in a function
 * @f: void functio
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}

