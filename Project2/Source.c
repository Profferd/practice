#include "inc.h"
#define N 20

void main()
{
    const int SIZE = 20;
    int arr[N];
    int n,a,b;
    printf("Enter array range: ");
    scanf("%i",&a);
    scanf("%i",&b);
    printf("Input array size's: ");
    scanf("%i",&n);
    inrand(n, arr, a, b);
    bubbleSort(arr, n);
    printf("After bubble sort: \n");
    outrand(n, arr);
    printf("\n");
    inrand(n, arr,a,b);
    InsertionSort(n, arr);
    printf("After insertion sort: \n");
    outrand(n, arr);
    printf("\n");
    inrand(n, arr,a,b);
    choise_sort(n, arr);
    printf("After choise sort: \n");
    outrand(n, arr);
}