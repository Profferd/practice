#include "fun.h"
void inrand(int n, int a1[], int a, int b)  /*������� ����� ��������� ����� 
                                              �� �������� �������*/  
{
    printf("Your auto array :\n");
    srand(time(0));
    for (int i = 0; i < n; i++)             //���� ���� ������� � �������� � ����� ������� ����� 
    {
        a1[i] = rand() % (b - a) + a;       /*�������� � ������� ������ ���������� �����
                                                � ������� �� � �� b*/
        printf("%i\t", a1[i]);
    }
    printf("\n\n");
}

void outrand(int n, int arr[])      //������� ������ ��� �������� ������
{
    for (int i = 0; i < n; i++)     //���� ���� �������� �� �������� ������
        printf("%i\t", arr[i]);
    printf("\n");
}