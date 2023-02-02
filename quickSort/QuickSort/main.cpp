#include <iostream>
const int N = 20;

void QUICKSORT(int a, int b, int mas[N])
{
	if (a >= b) {
		return;
	}
	int m = b;
	int k = mas[m];
	int l = a - 1;
	int r = b + 1;
	while (1)
	{
		do
		{
			l++;
		} while (mas[l] < k);
		do
		{
			r--;
		} while (mas[r] > k);
		if (l >= r)
			break;
		std::swap(mas[l], mas[r]);
	}
	r = l;
	l = l - 1;
	QUICKSORT(a, l, mas);
	QUICKSORT(r, b, mas);
}

int main() {
	int mas[N];                           
	int first = 0;                             
	int last = N - 1;                         
	for (int i = 0; i < N; i++)
		mas[i] = rand()%100-50 ;
	QUICKSORT(first, last, mas);
	for (int i = 0; i < N; i++) {
		std::cout << mas[i]<< " ";
	}
}