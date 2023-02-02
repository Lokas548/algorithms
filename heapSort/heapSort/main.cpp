#include <iostream>
using namespace std;


void heapCreate(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1; 
    int right = 2 * i + 2;


    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapCreate(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
 
    for (int i = n / 2 - 1; i >= 0; i--)
        heapCreate(arr, n, i);

    
    for (int i = n - 1; i >= 0; i--)
    {
        
        swap(arr[0], arr[i]);

       
        heapCreate(arr, i, 0);
    }
}

int main()
{
    int m[] = { 62, 111,111, -65, -111,0 };
    int n = sizeof(m) / sizeof(m[0]);

    heapSort(m, n);

    for (int i = 0; i < n; ++i) {
        cout << m[i] << " ";
    }
}