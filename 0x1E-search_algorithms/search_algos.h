#ifndef _search_algos_
#define _search_algos_

#include <stdio.h>
#include <stddef.h>

/*Prototypes*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search_index(int *array, size_t l, size_t r, int value);

#endif
