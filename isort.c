
#include <stdio.h>
#include "isort.h"
void print_array(int *data, int n) {
	int i;
	for(i = 0; i<n; i++) {
		printf("%d,", *data);
		data++;
	}
	printf("\n");
}

void shift_element(int *arr, int *i) {
	int start;
	for(start = *i; i > arr && *(i-1) > start; i--) {
		*i = *(i-1);
	}
	*i = start;
}

void insertion_sort(int *arr, int len) {
	int *i, *end = arr + len;
	for(i = arr + 1; i < end; i++)
		if(*i < *(i-1))
			shift_element(arr, i);
}
