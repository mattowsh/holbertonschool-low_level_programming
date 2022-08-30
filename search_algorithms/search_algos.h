#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int rec_binary(int *array, size_t low, size_t high, int value);
void print_array(const int *array, size_t low, size_t high);

#endif
