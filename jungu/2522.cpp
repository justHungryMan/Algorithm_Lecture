#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - i)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (j <= i)
				cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
}