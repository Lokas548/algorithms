#include <iostream>
using namespace std;
const int n = 15;
int mas[n] = { 41 ,1 ,2 ,5 ,4 ,2 ,77 ,-1 ,-3 ,6 ,3 ,61 ,-8 ,8 ,-11 }; 

int main() {
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mas[j] < mas[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(mas[i], mas[min_index]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
}