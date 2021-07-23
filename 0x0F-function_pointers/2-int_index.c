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
	int i;
	int count;

	if (array != NULL && cmp != NULL)
	{

		i = 1;
		while (i <= size)
		{
			count = cmp(array[i]);
			if (count != 0)
			{
				return (i);
			}

			i++;
		}

	}
	return (-1);
}

