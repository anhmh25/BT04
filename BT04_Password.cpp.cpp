#include<iostream>
using namespace std;

bool SymmetricString(string a, string b) {
	int n = a.size();
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != b[n - i - 1])return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	string s[100];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n-1; i++) {
		int n1 = s[i].size();
		if (n1 % 2 == 0)continue;
		for (int j = i + 1; j < n; j++) {
			int n2 = s[j].size();
			if (n1 != n2 || n2%2==0)continue;
			else {
				if (SymmetricString(s[i], s[j])) {
					cout << n1 <<endl;
					cout << s[i][(n1-1 )/ 2];
					exit;
				}
			}
		}
	}
	return 0;
}