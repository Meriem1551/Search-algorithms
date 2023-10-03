#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int *get_Array(char *s, int arr_size)
{
    int i;
    int *T = (int *)malloc(arr_size * sizeof(int));

    if (T == NULL)
    {
        return NULL;
    }
    puts(s);
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &T[i]);
    }
    return T;
}