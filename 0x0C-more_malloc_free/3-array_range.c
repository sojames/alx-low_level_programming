#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - function that creates an array of integers.
* @min: the min array to printed
* @max: the max array to be printed
*
* Return: Nothing.
*/
int *array_range(int min, int max)
{
int *_array, i = 0, my_min = min;
if (max < min)
return (0);
_array = malloc((max - min + 1) * sizeof(int));
if (!_array)
return (0);
while (i <= max - min)
_array[i++] = my_min++;
return (_array);

}

