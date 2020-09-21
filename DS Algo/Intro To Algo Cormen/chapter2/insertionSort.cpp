#include <iostream>

using namespace std;

void insertionSort(int *a, int n) {
	for (int j = 1; j < n; ++j)
	{
		int key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > key) {
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
}

int main(int argc, char const *argv[])
{
	int a[10] = {5, 9, 6, 3, 7, 1, 6, 0, 8, 10};
	insertionSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < 10; ++i)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}