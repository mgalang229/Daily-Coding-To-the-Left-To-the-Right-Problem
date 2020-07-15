#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a[100];
	for(int i = 1; i <= 12; ++i) {
		cin >> a[i];
	}
	cout << a[1] << "\n";
	int tmp = 1;
	for(int i = 2; i <= 12; ++i) {
		if(a[i] > a[i-1]) {
			for(int j = 1; j <= tmp; ++j) {
				cout << " ";
			}
			cout << a[i];
			tmp++;
		}
		else if(a[i] < a[i-1]) {
			tmp--;
			for(int j = 1; j <= tmp - 1; ++j) {
				cout << " ";
			}
			cout << a[i];
		}
		else {
			for(int j = 1; j <= tmp - 1; ++j) {
				cout << " ";
			}
			cout << a[i];
		}
		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	test_case();
	return 0;
}
