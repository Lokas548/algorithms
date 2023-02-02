#include <iostream>

using namespace std;
const int n = 15;
int mas[n] = {41 ,1 ,2 ,5 ,4 ,2 ,77 ,-1 ,-3 ,6 ,3 ,61 ,-8 ,8 ,-11 };
int main() {

	double factor = 1.2473309; 
	int step = n - 1; 


	while (step >= 1)
	{
		for (int i = 0; i + step < n; i++)
		{
			if (mas[i] > mas[i + step])
			{
				swap(mas[i], mas[i + step]);
			}
		}
		step /= factor;
	}

	
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
}