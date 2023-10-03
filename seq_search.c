#include "main.h"

int Sequencial_search(int T[], int size, int x)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (T[i] == x)
        {
            return 1;
        }
    }
    return -1;
}
// complexsity O(n)