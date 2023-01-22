// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <iostream>

using namespace std;

int MinMax(int arr[], int low, int high, int &max, int &min) {
  int mid, max1, min1;
  if (low == high) {
    max = min = arr[low];
  } else if (high == low + 1) {
    if (arr[low] < arr[high]) {
      max = arr[high], min = arr[low];
    } else {
      max = arr[low], min = arr[high];
    }
  } else {
    mid = (low + high) / 2;
    MinMax(arr, low, mid, max, min);
    MinMax(arr, mid + 1, high, max1, min1);
    if (max < max1) max = max1;
    if (min > min1) min = min1;
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int max, min;
  MinMax(arr, 0, n - 1, max, min);
  cout << "Max: " << max << "\n";
  cout << "Min: " << min << "\n";

  return 0;
}