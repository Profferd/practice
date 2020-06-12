#include "fun.h"
void InsertionSort(int n, int arr[])
{
    int new, loc;

    for (int i = 1; i < n; i++)
    {
        new = arr[i];
        loc = i - 1;
        while (loc >= 0 && arr[loc] > new)
        {
            arr[loc + 1] = arr[loc];
            loc = loc - 1;

        }
        arr[loc + 1] = new;
        for (int o = 0; o < n; o++)
        {
            printf("%i\t", arr[o]);
        }
        printf("\n");
    }
}