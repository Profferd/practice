#include "fun.h"
void choise_sort(int n, int arr[])          //функція сортування виборками
{
    int min_number = 0, min_pos;
    for (int i = 0; i <= (n - 1); i++)
    {
        //пошук мінімального елемента в частині масиву від а [1] до a [SIZE]
        min_pos = i;
        for (int j = i + 1; j <= (n - 1); j++)//цикл вибору мінімального
        {                                   //значення за 1 прохід
            if (arr[min_pos] > arr[j])
            {
                min_pos = j;
            }
        }
                                            //поменяем местами a [min] и a[i]
        min_number = arr[min_pos];
        arr[min_pos] = arr[i];
        arr[i] = min_number;
        for (int o = 0; o < n; o++)         //Цикл який выводить зміни в масиві
        {
            printf("%i\t", arr[o]);
        }
        printf("\n");
    }
}