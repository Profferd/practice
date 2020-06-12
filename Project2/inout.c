#include "fun.h"
void inrand(int n, int a1[], int a, int b)  /*функція вводу рандомних чисел 
                                              по заданому діапазані*/  
{
    printf("Your auto array :\n");
    srand(time(0));
    for (int i = 0; i < n; i++)             //цикл який вводить і виводить в масив рандомні числа 
    {
        a1[i] = rand() % (b - a) + a;       /*Внесення в елемент масиву рандомного числа
                                                в діапазані від а до b*/
        printf("%i\t", a1[i]);
    }
    printf("\n\n");
}

void outrand(int n, int arr[])      //функція виводу всіх елементів масиву
{
    for (int i = 0; i < n; i++)     //цикл який виводить всі елементи масиву
        printf("%i\t", arr[i]);
    printf("\n");
}