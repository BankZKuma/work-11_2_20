#include<stdio.h>
using namespace std;
void Order(int x[]);
#define N 5
int main() {
	int x[N];
	for (int i = 0; i < N; i++)
		scanf_s("%d", &x[i]);
	Order(x);
}
void Order(int x[]) {
	int j;
	for (int i = 1; i < N; i++)
	{
		int temp = x[i];
		for (j = i; j >= 0 && temp < x[j - 1]; j--) {
			x[j] = x[j - 1];
		}
		x[j] = temp;
	}
	for (int i = 0; i < N; i++)
		printf("%d", x[i]);
}