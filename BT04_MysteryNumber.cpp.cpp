#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n; i++) {

		cin >> b[i];
	}
	for (int i = 0; i <= n; i++) {
		int j;
		for (j = 0; j < n; j++) {
			if (b[i] == a[j])break;
		}
		if (j == n) cout << b[i];
	}
}
