
#include <stdio.h>
#include "isort.h"
#define len 50
int arr[len];
int main()
{
    int temp;
    int number = 1;
    for (int i = 0; i < 50; i++)
    {
        printf("enter number", &number);
        scanf("%d", &temp);
        arr[i] = temp;
    }
    insertion_sort(arr, len);
    print_array(arr, len);
}