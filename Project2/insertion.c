#include "fun.h"
void InsertionSort(int n, int arr[])        //функц≥€ сортуванн€м вставками
{
    int new, loc;

    for (int i = 1; i < n; i++)             // цикл проход≥в, i - номер проходу
    {
        new = arr[i];
        loc = i - 1;
        while (loc >= 0 && arr[loc] > new)  // пошук м≥сц€ елемента в готов≥й посл≥довност≥
        {
            arr[loc + 1] = arr[loc];        // зрушуЇмо елемент направо, поки не д≥йшли
            loc = loc - 1;

        }
        arr[loc + 1] = new;                 // м≥сце знайдено, вставити елемент
        for (int o = 0; o < n; o++)         //÷икл €кий выводить зм≥ни в масив≥
        {
            printf("%i\t", arr[o]);
        }
        printf("\n");
    }
}