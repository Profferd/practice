#include "fun.h"
void choise_sort(int n, int arr[])          //������� ���������� ���������
{
    int min_number = 0, min_pos;
    for (int i = 0; i <= (n - 1); i++)
    {
        //����� ���������� �������� � ������ ������ �� � [1] �� a [SIZE]
        min_pos = i;
        for (int j = i + 1; j <= (n - 1); j++)//���� ������ ����������
        {                                   //�������� �� 1 ������
            if (arr[min_pos] > arr[j])
            {
                min_pos = j;
            }
        }
                                            //�������� ������� a [min] � a[i]
        min_number = arr[min_pos];
        arr[min_pos] = arr[i];
        arr[i] = min_number;
        for (int o = 0; o < n; o++)         //���� ���� �������� ���� � �����
        {
            printf("%i\t", arr[o]);
        }
        printf("\n");
    }
}