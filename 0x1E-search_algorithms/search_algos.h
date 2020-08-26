#ifndef _H_MYK_H_
#define _H_MYK_H_
#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
