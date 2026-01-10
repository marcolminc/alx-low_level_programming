#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


/* includes */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <sys/param.h>


/* data structures & definitions */


/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(const int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);


#endif /*SEARCH_ALGOS_H*/
