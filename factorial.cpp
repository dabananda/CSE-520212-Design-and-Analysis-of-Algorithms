// Q: nth Fibonacci number

#include <iostream>

using namespace std;

// iterative method
int Fibonacci(int n) {
	if (n <= 1) {
		return n;
	} else {
		int first = 0, second = 1, current;
		for (int i = 2; i <= n; i++) {
			current = first + second;
			first = second, second = current;
		}
		return current;
	}
}

// recursive method [very slow]
// int Fibonacci(int n) {
// 	if (n <= 1) {
// 		return n;
// 	}
// 	return Fibonacci(n - 1) + Fibonacci(n - 2);
// }

int main() {
	int n;
	cin >> n;
	cout << Fibonacci(n) << endl;

	return 0;
}
