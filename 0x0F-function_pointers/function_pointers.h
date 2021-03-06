#ifndef FILE_F_POINTRS
#define FILE_F_POINTRS

#include<stdlib.h>
#include <stddef.h>
#include<stdio.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

int main(int argc, char *argv[]);

#endif
