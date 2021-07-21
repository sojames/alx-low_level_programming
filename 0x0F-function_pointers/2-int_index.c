#include "function_pointers.h"

/**
 * int_index - function that searches for integers
 * @array: array of funcrions
 * @size: sizes of functions
 * @cmp: void function pointer
 * Return: -Return -1 if no integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (array && size && cmp)
{
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}

}

return (-1);
}
