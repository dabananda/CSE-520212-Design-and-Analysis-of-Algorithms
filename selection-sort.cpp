#include <iostream>

using namespace std;

int SelectionSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int j = i;
		for (int k = j + 1; k < n; k++) {
			if (arr[k] < arr[j]) {
				j = k;
			}
		}
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return arr[n];
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	arr[n] = SelectionSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
