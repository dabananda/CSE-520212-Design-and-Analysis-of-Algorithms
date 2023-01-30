#include <iostream>

using namespace std;

void Merge(int arr[], int low, int mid, int high) {
	int a = low, b = mid + 1, c = low, temp[high + 1];
	while (a <= mid && b <= high) {
		if (arr[a] <= arr[b]) temp[c] = arr[a], a++;
		else temp[c] = arr[b], b++;
		c++;
	}
	if (a > mid) {
		for (int i = b; i <= high; i++) {
			temp[c] = arr[i];
			c++;
		}
	} else {
		for (int i = a; i <= mid; i++) {
			temp[c] = arr[i];
			c++;
		}
	}
	for (int i = low; i <= high; i++) arr[i] = temp[i];
}

void MergeSort(int arr[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		Merge(arr, low, mid, high);
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	MergeSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << "\n";
	return 0;
}
