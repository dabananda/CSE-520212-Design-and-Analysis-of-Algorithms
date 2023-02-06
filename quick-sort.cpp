#include <iostream>
#include <algorithm>

using namespace std;

int Partition(int arr[], int low, int high) {
	int pivot = arr[low], i = low, j = high;
	while (i < j) {
		while (arr[i] <= pivot && i < high) i++;
		while (arr[j] > pivot) j--;
		if (i < j) swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j;
}

void QuickSort(int arr[], int low, int high) {
	if (low < high) {
		int j = Partition(arr, low, high);
		QuickSort(arr, low, j - 1);
		QuickSort(arr, j + 1, high);
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	QuickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << "\n";
	return 0;
}
