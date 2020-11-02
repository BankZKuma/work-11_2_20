/*#include<iostream>
using namespace std;
#define N 5
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int arr[N];
	bool swapped = true;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	do
	{
		swapped = false;
		for (int i = 0; i < N-1; i++) 
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + i]);
				swapped = true;
			}
	} while (swapped);
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}*/