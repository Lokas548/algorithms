#include <iostream>
using namespace std;
const int n = 15;

int mas[n] = {1, 4, -2, 3, 2, 14, 5, -6, 8, 11, -4, 12, 16, 18, 9};
int main() {

	for (int i = 1; i < n ; i++) {
		for (int j = i; j > 0 && mas[j - 1] > mas[j]; j--) {
			int tmp = mas[j - 1];
			mas[j - 1] = mas[j];
			mas[j] = tmp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}

}