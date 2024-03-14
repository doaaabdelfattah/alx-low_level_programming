#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Advanced */
int jump_search(int *array, size_t size, int value);
#endif
