#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int size = get_input("Size: ");
    int *arr = get_Array("Enter the array", size);
    int num = get_input("Searching the number: ");
    int choice = get_input("Enter 1 for sequencial and 2 for dichotomous: ");
    if (choice == 1)
        printf("The result by using seq: %d", Sequencial_search(arr, size, num));
    else
        printf("The result by usinf dic is: %d", Dichotomous_search(arr, size, num));
    return 0;
}