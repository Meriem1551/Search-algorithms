#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = get_input("Size: ");
    int *arr = get_Array("Enter the array", size);
    int num = get_input("Searching the number: ");
    // printf("%d", Sequencial_search(arr, size, num));
    printf("%d", Dichotomous_search(arr, size, num));
    return 0;
}