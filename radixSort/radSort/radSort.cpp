#include <iostream>

const int mas_size = 20;

int value_of_digit(int i, int digit)     
{
    while (digit > 1)
    {
        i /= 10;
        digit--;
    }
    return i % 10;
}

void RadixSort(int A[mas_size][mas_size], int arr[], int size, int digit)
{
    int B[mas_size];
    int t = 0;
    for (int i = 0; i < size; i++)
    {
        B[i] = 0;
    }
    int a;
    for (int i = 0; i < size; i++)
    {
        a = value_of_digit(arr[i], digit);
        A[B[a]][a] = arr[i];
        B[a]++;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < B[i]; j++)
        {
            arr[t] = A[j][i];
            t++;
        }
    }
}

int main()
{
    int digit = 4;

    int A[mas_size][mas_size];
    int mas[mas_size] = {398, 944, 11, 4883, 5983, 583, 542, 59, 1, 598, 2, 56, 9743, 1, 958, 34, 56, 33, 55, 1};

    for (int i = 1; i < digit + 1; i++)
    {
        RadixSort(A, mas, mas_size, i);
    }

    for (int i = 0; i < mas_size; i++)
    {
        std::cout << mas[i] << " ";
    }

    return 0;
}