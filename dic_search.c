// we mast use a sorting array

#include "main.h"

int Binary_search(int T[], int size, int x)
{
    int min = 0, max = size - 1, med;
    do
    {
        med = (max + min) / 2;
        if (T[med] == x)
        {
            return 1;
        }
        else
        {
            if (T[med] < x)
            {
                min = med + 1;
            }
            else
            {
                max = med - 1;
            }
        }
    } while (min < max);
    return -1;
}