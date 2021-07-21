#include"function_pointers.h"

/**
 * array_iterator - function that print other function
 * @array: array of other function
 * @size: size of functions called
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
{
if (array && action)
{
for (unsigned int i = 0; i < size; i++)
(*action)(array[i]);
}
}

}
