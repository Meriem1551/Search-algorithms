#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = get_input("Size: ");
    int *t = get_Array("Enter the array", size);
    int num = get_input("Searching the number: ");
    printf("%d", Sequencial_search(t, size, num));
    printf("%d", Dichotomous_search(t, size, num));
    return 0;
}