#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2 dimensional array of ints
 *
 *
 *@width: width of the block grid
 *@height: height of the block grid
 *
 *Return: grid block
 **/
int **alloc_grid(int width, int height)
{
int **block;
int i, j;
block = malloc(sizeof(int *) * height);
if (block == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
block[i] = malloc(sizeof(int) * width);
if (block[i] == NULL)
{
for (i = (i - 1); i >= 0; i--)
{
free(block[i]);
}
free(block);
return (NULL);
}
}
for (i = 0; j < width; j++)
block[i][j] = 0;
return (block);
}


