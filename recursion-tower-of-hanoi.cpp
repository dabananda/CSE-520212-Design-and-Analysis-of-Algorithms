#include <bits/stdc++.h>

using namespace std;

// total output lines = 2^n
// x = source, y = destination, z = auxiliary

void TowerOfHanoi(int n, char x, char y, char z) {
	if (n >= 1) {
		TowerOfHanoi(n - 1, x, z, y);
		cout << "Move disk " << n << " from " << x << " to " << y << endl;
		TowerOfHanoi(n - 1, z, y, x);
	}
}

int main() {
	int n;
	cin >> n;
	TowerOfHanoi(n, 'x', 'y', 'z');
	return 0;
}
