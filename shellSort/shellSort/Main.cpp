#include <iostream>
using namespace std;



int main() {
	int step, i, j;
	int n = 10;
	int arr[10];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int count = 0;
	step = n;
	step = step / 1.273;
	while (step > 0)
	{
		for (i = 0; i < n - step; i++)
		{
			j = i;
			while (j >= 0 && arr[j] > arr[j + step])
			{
				count = arr[j];
				arr[j] = arr[j + step];
				arr[j + step] = count;
				j-=step;
			}
		}
		step = step / 2;
	}
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}