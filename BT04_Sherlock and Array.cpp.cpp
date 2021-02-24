#include<iostream>
using namespace std;

bool Balance(int a[], int n, int vt) {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < vt; i++)sum1 += a[i];
	for (int i = vt + 1; i < n; i++)sum2 += a[i];
	if (sum1 == sum2)return true;
	if (vt == 0 && sum2 == 0)return true;
	if (vt == (n - 1) && sum1 == 0)return true;
	return false;
}

int main() {
	int s;
	cin >> s;
	while (s--) {
		int a[10000];
		int n, count = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			if (Balance(a, n, i)) {
				count++;
				break;
			}
		}
		if (count != 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}