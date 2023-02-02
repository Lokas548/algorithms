
#include <iostream>
using namespace std;
void Merge(int* A, int first, int last)
{
	int middle, startElement, finalElement, j;
	int* mas = new int[100];
	middle = (first + last) / 2;
	startElement = first; 
	finalElement = middle + 1;
	for (j = first; j <= last; j++)
		if ((startElement <= middle) && ((finalElement > last) || (A[startElement] < A[finalElement])))
		{
			mas[j] = A[startElement];
			startElement++;
		}
		else
		{
			mas[j] = A[finalElement];
			finalElement++;
		}
	
	for (j = first; j <= last; j++) {
		A[j] = mas[j];
	}
	delete[]mas;
};

void MergeSort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(A, first, (first + last) / 2);
			MergeSort(A, (first + last) / 2 + 1, last);
			Merge(A, first, last);
		}
	}
};

void main()
{
	int i, n;
	n = 10;
	int* A = new int[100];
	cout << "print elements of mas: \n "; 
	for (i = 1; i <= n; i++)
	{
		 cin >> A[i];
	}
	MergeSort(A, 1, n); 
	cout << "Sorted: "; 
	for (i = 1; i <= n; i++) {
		cout << A[i] << " ";
	}
	delete[]A;
}